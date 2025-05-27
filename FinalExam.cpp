/**
* 
*/
#include <iostream>
using namespace std;

const int X = 4, Y = 3;

void adddata(double m[], double n);
double sumpos(double m[]);

int main()
{
	double matrix[X][Y], num, sum = 0;
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
			while (i < Y)
			{
				cin >> num;
				if (num >= -2.5 and num <= 2.5)
				{
					matrix[j][i] = num;
					j++;
					if (j == X)
					{
						j = 0;
						i++;
					}
				}
				else
					cerr << "Incorrect number inputted" << endl;
			}	
		}
		else if (choice == 2)
		{
			i = 0;
			while (j < Y)
			{
				sum += sumpos(matrix[i]);
				i++;
				if (i == Y)
				{
					i = 0;

				}
			}
			cout << "The sum of all positive numbers in the matrix is " << sum << endl;
		}
		else if (choice == 0)
			;
		else
			cerr << "incorrect choice inputted" << endl;
	} while (choice != 0);
}

void adddata(double m[], double n)
{
}

double sumpos(double m[])
{
	int i = 0;
	double sum = 0;
	while (i < X)
	{
		if (m[i] > 0)
			sum += m[i];
		i++;
	}
}
