#include <iostream>

using namespace std;

void multimatrix()
{
	int array1[3][3], array2[3][3];
	int multi[3][3];

	cout << "Enter Elements of 1st matrix : ";
	cout << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> array1[i][j];
	}

	cout << "Enter elements of 2nd matrix : ";
	cout << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> array2[i][j];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			multi[i][j] = 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				multi[i][j] += array1[i][k] * array2[k][j];
			}
		}
	}

	cout << "Multiplication of 2 matrices is : " << endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << multi[i][j];
			cout << "\t";
		}
		cout << "\n";
	}
}

int main()
{
	multimatrix();

	cout << endl;
	cout << endl;
	cout << "\nRavi kumar thakur" << endl;
    Cout << "\nIT Shift 2"
}