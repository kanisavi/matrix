#include "application.h"
#include "matrix.h"
#include <iostream>

using namespace std;

TApplication::TApplication()
{

}

int TApplication::exec()
{
	int ch, n;
	while (true)
	{
		ch = menu();
		switch (ch)
		{
		case 1:
		{
			cin >> n;
			TMatrix p(n);
			p.fill();
			p.display();
			break;
		}
		case 2:
		{
		}
		break;
		case 3:
			break;
		case 4:
		{
		
		}
		break;
		case 5:
		{
			
		}
		break;
		case 0:
			return 0;
		default:
			break;
		}
	}
}

int TApplication::menu()
{
	int ch;
	cout << "1 - fill matrix" << endl;
	cout << "2 - " << endl;
	cout << "3 - " << endl;
	cout << "4 - " << endl;
	cout << "5 - display current matrix" << endl;
	cout << "0 - exit" << endl << "> ";
	cin >> ch;
	return ch;
}