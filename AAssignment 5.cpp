#include <iostream>
using namespace std;

void hourglass(int size, char symbol);
void diamond(int size, char symbol);
void flag(int size, char symbol);
void ladder(int size, char symbol,int rungs);

int main()
{
	int choice, size,rungs;
	char symbol=0, ch='y';
	do
	{
		cout << "Select one of the following choices:\n1. Display an hourglass pattern\n2. Display a diamond pattern\n";
		cout << "3. Display the Nepal flag\n4. Display the ladder pattern\n";
		cout << "\nChoice= ";
		cin >> choice;
		while ((choice <= 0) || (choice > 4))
		{
			cout << "\nYou entered wrong choice. You are only allowed to choose from 1 to 4.";
			cout << "\nRe-enter the choice. " << endl;
			cout << "\nChoice= ";
			cin >> choice;
		}
		
		switch (choice)
		{
		case 1:
			cout << "\nEnter a positive odd number for the size of the pattern.\nSize= ";
			cin >> size;

			while ((size % 2 == 0) || (size < 0))
			{
				cout << "\nYou can only enter positive odd number.\n";
				cout << "Re-enter size of the pattern.\n";
				cout << "Size= ";
				cin >> size;
			}
			cout << "\nEnter the symbol you want to use inside the pattern.\nSymbol= ";
			cin >> symbol;

			hourglass(size, symbol);
			break;
		case 2:
			cout << "\nEnter a positive odd number for the size of the pattern.\nSize= ";
			cin >> size;

			while ((size % 2 == 0) || (size < 0))
			{
				cout << "\nYou can only enter positive odd number.\n";
				cout << "Re-enter size of the pattern.\n";
				cout << "Size= ";
				cin >> size;
			}
			cout << "\nEnter the symbol you want to use inside the pattern.\nSymbol= ";
			cin >> symbol;

			diamond(size, symbol);
			break;
		case 3:
			cout << "\nEnter a positive number for the size of the pattern.\nSize= ";
			cin >> size;

			while ((size < 0))
			{
				cout << "\nYou can only enter positive number.\n";
				cout << "Re-enter size of the pattern.\n";
				cout << "Size= ";
				cin >> size;
			}
			cout << "\nEnter the symbol you want to use inside the pattern.\nSymbol= ";
			cin >> symbol;
			flag(size, symbol);
			break;
		case 4:
			cout << "\nEnter a positive number for the size of the pattern.\nSize= ";
			cin >> size;

			while ((size < 0))
			{
				cout << "\nYou can only enter positive number.\n";
				cout << "Re-enter size of the pattern.\n";
				cout << "Size= ";
				cin >> size;
			}
			cout << "\nEnter number of rungs for the pattern.\nRungs= ";
			cin >> rungs;
			while ((rungs < 0))
			{
				cout << "\nYou can only enter positive number.\n";
				cout << "Re-enter number of rungs.\n";
				cout << "Rungs= ";
				cin >> rungs;
			}

			cout << "\nEnter the symbol you want to use inside the pattern.\nSymbol= ";
			cin >> symbol;
			ladder(size, symbol,rungs);
			break;
		}

		cout << "Press y or Y if you want to enter another choice= ";
		cin >> ch;
	} while (ch == 'y' || ch == 'Y');
}
void hourglass(int size, char symbol)
{
	
	int n, s, i;//'n' is counter for lines,'s' is for spaces and 'i' is for symbols.
	for (n = size; n >= 0; n = n - 2)//this loop is for upper half of the hourglass.
	{
		for (s = size - 1; s >= n; s -= 2)//this loop will print spaces.
		{
			cout << " ";
		}
		for (i = 1; i <= n; i++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (n = 3; n <= size; n = n + 2)//this loop is for lower half of the hourglass.
	{
		for (s = size - 1; s >= n; s -= 2)//this loop will print spaces.
		{
			cout << " ";
		}
		for (i = 1; i <= n; i++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
}

void diamond(int size, char symbol)
{
	
	int n, s, i;
	
	for (n = 1; n <= size; n = n + 2)//this loop is working as a counter for lines for the upper half of the dimond.
	{
		for (s = size - 1; s >= n; s -= 2)//this loop will print spaces.
		{
			cout << " ";
		}
		for (i = 1; i <= n; i++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (n = size; n >= 0; n = n - 2)//this loop is working as a counter for lines for the lower half of the dimond.
	{
		for (s = size + 1; s >= n; s -= 2)//this loop will print spaces.
		{
			cout << " ";
		}
		for (i = 3; i <= n; i++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
}


void flag(int size, char symbol)
{
	int i, k;
	for (int i = 0; i <= size; i++)//this is the first loop for the upper half of the flag.
	{
		cout << " ";
		for (int k = 1; k < i; k++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (i = size; i > 0; i--)//this is the second loop for the upper half of the flag.
	{
		cout << " ";
		for (k = 1; k <= i; k++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (int i = 2; i <= size; i ++)//this is the first loop for the lower half of the flag.
	{
		cout << " ";
		for (int k = 0; k < i; k++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	for (i = size+1; i >= 0; i --)//this is the second loop for the lower half of the flag.
	{
		cout << " ";
		for (k = 1; k <= i; k++)//this loop will print symbols.
		{
			cout << symbol;
		}
		cout << endl;
	}
	
}

void ladder(int size, char symbol,int rungs)
{
	int i, j,k;
	for (i = 1; i <= size; i++)//this loop will print symbols for the first line of the rung just for the first rung.
	{
		cout << symbol;
	}
	cout << endl;
	for (k = 1; k <= rungs; k++)//this loop is a counter for number of rungs.
	{
	
		for (i = 1; i <= size; i++)//this loop will print the pattern inside a rung.
		{
			for (j = 1; j <= size; j++)//this loop will print symbols at first and last place in a line and will print spaces between them.
			{
				if ((j == 1) || (j == size))
					cout << symbol;
				else
					cout << " ";
			}
			cout << endl;
		}

		for (i = 1; i <= size; i++)//this loop will display the line of symbols in the last line of a rung.
		{
			cout << symbol;
		}
		cout << endl;
	}
}