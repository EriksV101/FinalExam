/**
* 
*/
#include <iostream>
using namespace std;

void adddata(double m[], double n);
double sumpos(double m[]);

int main()
{
	const int X = 4, Y = 3;
	double matrix[X][Y], num;
	int choice, i = 0, j = 0;

	do
	{
		cout << "1) Enter data in matrix (range -2.5 to 2.5)" << endl;
		cout << "2) Sum of all positive numbers" << endl;
		cout << "0) Exit" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "enter a number between -2.5 and 2.5" << endl;
			cin >> num;
			j++;
			if (j == X)
			{
				j = 0;
				i++;
			}
			if (i < X and i < Y)
				adddata(matrix[j], num);
			else
				cerr << "The matrix is full" << endl;
		}
		else if (choice == 2)
		{
			cout << "Sum num" << endl;
		}
		else if (choice == 0)
			;
		else
			cerr << "incorrect choice inputted" << endl;
	} while (choice != 0);
}

void adddata(double& m, double n)
{
	m = n;
}
