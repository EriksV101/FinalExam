/**
* 
*/
#include <iostream>
using namespace std;

void adddata(double m[]);
double sumpos(double m[]);

int main()
{
	const int X = 4, Y = 3;
	double matrix[X][Y];
	int choice;

	do
	{
		cout << "1) Enter data in matrix (range -2.5 to 2.5)" << endl;
		cout << "2) Sum of all positive numbers" << endl;
		cout << "0) Exit" << endl;
		cin >> choice;

		if (choice == 1)
		{
			cout << "enter data" << endl;
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

