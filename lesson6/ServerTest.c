#include <sys/socket.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <pwd.h>


#define ERROR           -1
#define BUFFER_SIZE     256
#define LOG_FILE        "deamon_server.log"

FILE *logFd = NULL;
int termSigKill = 0;

void DeamonCreation(void);
void LogInfo(const char *logMsg);
int GetConnection(const char *ip, const char *port, socklen_t *size);
void GetSendingMsg(char *msgBuffer, const int bufferSize);
void GetConnectionInfo(struct sockaddr *connectionSockAddr, char *msgBuffer, const int bufferSize);
void sigHandler(int signal);
void Signal(int sigType, void(*sigHadler_prt)(int));
int GetUsrHomeDir(const char *logFileName, char *homeDirBuffer, int bufferSize);


int main(int argc, char **argv)
{   
    char *progName = argv[0];
    if((argc != 2) && (argc != 3)) 
    {
        printf("Usage: %s [<host>] <port>\n", progName);
        return 1;
    }

    DeamonCreation();

   
    char *ip = NULL;
    char *port = NULL;

    if(argc == 3) 
    {
        ip = argv[1];
        port = argv[2];
    }
    else
        port = argv[1];


    int listenSock, connectionSock;
    socklen_t sockAddrSize, connectionSockAddrSize;

    listenSock = GetConnection(ip, port, &sockAddrSize);
    if(listenSock < 0)
        return 1;

    Signal(SIGTERM, sigHandler);
    listen(listenSock, SOMAXCONN);

    LogInfo("Server start");

    char msgBuf[BUFFER_SIZE];
    struct sockaddr *connectionSockAddr = (struct sockaddr*)malloc(sockAddrSize);
    if(!connectionSockAddr)
    {
        LogInfo(strerror(errno));
        return 1;
    }

    while(!termSigKill)
    {
        connectionSockAddrSize = sockAddrSize;
        if((connectionSock = accept(listenSock, connectionSockAddr, &connectionSockAddrSize)) == ERROR)
        {
            LogInfo(strerror(errno));
            continue;
        }

        GetSendingMsg(msgBuf, BUFFER_SIZE);
        send(connectionSock, msgBuf, strlen(msgBuf), MSG_DONTROUTE);
        GetConnectionInfo(connectionSockAddr, msgBuf, BUFFER_SIZE);
        LogInfo(msgBuf);
        close(connectionSock);
    }

    LogInfo("Server was terminated");    
    free(connectionSockAddr);
    close(listenSock);
    fclose(logFd);
    
    return 0;
}


void DeamonCreation(void)
{
    pid_t childProc = fork();

    if(childProc < 0)
    {
        perror("fork() failed");
        exit(1);
    }

    if(childProc > 0)
    {
        printf("Child process id - #%d\n", childProc);
        exit(0);
    }

    umask(0);

    for(int i = 2; i >= 0; i --)
        close(i);

    char dirBuffer[BUFFER_SIZE];
    if(GetUsrHomeDir(LOG_FILE, dirBuffer, BUFFER_SIZE) == ERROR)
        exit(1);

    logFd = fopen(dirBuffer, "w");
    dup2(logFd->_fileno, STDIN_FILENO);
    dup2(logFd->_fileno, STDOUT_FILENO);
    dup2(logFd->_fileno, STDERR_FILENO);

    if((setsid() == ERROR) || (chdir("/") == ERROR))
    {
        perror("Child process is failed");
        exit(1);
    }
}


void LogInfo(const char *logMsg)
{
    time_t logTime = time(NULL);
    fprintf(logFd, "[%.24s]: Deamon_Server[#%d] - %s\n", ctime(&logTime), getpid(), logMsg);
    fflush(logFd);
}


int GetConnection(const char *ip, const char *port, socklen_t *size)
{
    struct addrinfo hint, *res, *res_iter;
    bzero(&hint, sizeof(hint));

    hint.ai_flags = AI_PASSIVE;
    hint.ai_family = AF_UNSPEC;
    hint.ai_socktype = SOCK_STREAM;

    int socket_;
    int param = 1;
    int result;
    if((result = getaddrinfo(ip, port, &hint, &res)))
    {
        LogInfo(gai_strerror(result));
        return -1;
    }

    res_iter = res;

    do
    {        
        if((socket_ = socket(res_iter->ai_family, res_iter->ai_socktype, res_iter->ai_protocol)) == -1)
            continue;

        setsockopt(socket_, SOL_SOCKET, SO_REUSEADDR, &param, sizeof(param));

        if(!bind(socket_, res_iter->ai_addr, res_iter->ai_addrlen))
            break;
        
        close(socket_);
    }
    while((res_iter = res_iter->ai_next));


    if(!res_iter)
    {
        LogInfo("Connection failed");
        return -1;
    }

    *size = res_iter->ai_addrlen;
    freeaddrinfo(res);

    return socket_;    
}


void GetSendingMsg(char *msgBuffer, const int bufferSize)
{
    char msg[256];
    time_t timeConnection = time(NULL);
    snprintf(msg, sizeof(msg), "Server time: [%.24s]", ctime(&timeConnection));
    snprintf(msgBuffer, bufferSize, "%lu*%s", strlen(msg), msg);
}


void GetConnectionInfo(struct sockaddr *connectionSockAddr, char *msgBuffer, const int bufferSize)
{
    char ipAddrBuf[INET6_ADDRSTRLEN];
    int port;

    switch(connectionSockAddr->sa_family)
    {
        case AF_INET:
        {
            inet_ntop(AF_INET, &((struct sockaddr_in*)connectionSockAddr)->sin_addr, ipAddrBuf, INET6_ADDRSTRLEN);
            port = ((struct sockaddr_in*)connectionSockAddr)->sin_port;
        }
            break;
        case AF_INET6:
        {
            inet_ntop(AF_INET6, &((struct sockaddr_in6*)connectionSockAddr)->sin6_addr, ipAddrBuf, INET6_ADDRSTRLEN);
            port = ((struct sockaddr_in6*)connectionSockAddr)->sin6_port;
        }
    }

    snprintf(msgBuffer, bufferSize, "Connection from: %s:%d", ipAddrBuf, port);
}


void Signal(int sigType, void(*sigHadler_prt)(int))
{
    struct sigaction act, oact;
    act.sa_flags = 0;
    sigemptyset(&act.sa_mask);
    act.sa_handler = sigHadler_prt;

    sigaction(sigType, &act, &oact);
}


void sigHandler(int sigType)
{
    termSigKill = 1;
}


int GetUsrHomeDir(const char *logFileName, char *homeDirBuffer, int bufferSize)
{
    int effUsrPid = geteuid();
    struct passwd *passwd_ptr = getpwuid(effUsrPid);

    if(!passwd_ptr)
    {
        LogInfo(strerror(errno));
        return ERROR;
    }

    snprintf(homeDirBuffer, bufferSize, "%s/%s", passwd_ptr->pw_dir, logFileName);
    
    return 0;
}
