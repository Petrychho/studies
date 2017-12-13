#include <iostream>

using namespace std;

class Matrix
{
private:
	int matrix[10][10];
	int i_max;
	int j_max;
public:
	Matrix(int a, int b)
	{ i_max = a - 1; j_max = b - 1;};
	void PutMatrix(int i, int j, int temp)
	{
		if ((i >= 0 && i <= i_max) && (j >= 0 && j <= j_max))
		{
			matrix[i][j] = temp;
		}
		else cout << "Error" << endl;
	}
	void GetMatrix(int i, int j)
	{
		if ((i >= 0 && i <= i_max) && (j >= 0 && j <= j_max))
		{
			cout << matrix[i][j] << endl;
		}
		else cout << "Error" << endl;
	}
};

void main()
{
	Matrix m(3,4);

	m.PutMatrix(0,0,6);
	m.GetMatrix(0,0);

	m.PutMatrix(4,4,4);
}

