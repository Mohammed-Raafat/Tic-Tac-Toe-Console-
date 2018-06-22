#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

bool check(char b[5])
{
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (b[i] != '\0')
			count++;
	}
	if (count == 5)
		return false;
}

void limchar(char BEGIN, char END, char* Output) // This function made by Mahmoud Hamed (Mekki). All rightes reserved.
{
	char hold;
	while (true)
	{
		hold = _getch();
		if (hold >= BEGIN && hold <= END) //Must be a value between (BEGIN - END)
		{
			*Output = hold;
			cout << *Output << endl;
			break;
		}
	} //End Of Loop
}

void main()
{

	/*cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       /" << endl;
	system("cls");
	Sleep(100);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t   /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t     /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t       /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t   /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\t       /" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t\t\t\t /" << endl;
	Sleep(100);
	system("cls");
				cout << "\t\t\t\t\t\t\t\a   \4\4\4\4\4\n"
				 << "\t\t\t\t\t\t\t  \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t  \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t   \4\4\4\4\4\n";
				Sleep(200);*/
	/*switch (switch_on)
	{
	case 'X':
			cout << "\t\t\t\t\t\t\t\a   \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t    \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t     \4\4 \4\4\n"
				 << "\t\t\t\t\t\t\t      \4\4\4\n"
				 << "\t\t\t\t\t\t\t     \4\4 \4\4\n"
				 << "\t\t\t\t\t\t\t    \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t   \4\4     \4\4\n";
		break;
	case 'O':
			cout << "\t\t\t\t\t\t\t\a   \4\4\4\4\4\n"
				 << "\t\t\t\t\t\t\t  \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t \4\4     \4\4\n"
				 << "\t\t\t\t\t\t\t  \4\4   \4\4\n"
				 << "\t\t\t\t\t\t\t   \4\4\4\4\4\n";
			break;
	default:
		break;
	}*/
	/*cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t\t\t\t|" << endl;
	Sleep(100);
	system("cls");

	cout << "\a\t\t\t      \4\4\4\4\4\n"
		<< "\t\t\t     \4\4   \4\4\n"
		<< "\t\t\t    \4\4     \4\4\n"
		<< "\t\t\t    \4\4     \4\4\n"
		<< "\t\t\t    \4\4     \4\4\n"
		<< "\t\t\t     \4\4   \4\4\n"
		<< "\t\t\t      \4\4\4\4\4\n";
	Sleep(200);
	/*
	switch (switch_on)
	{
	case 'X':
		cout << "\a\t\t\t    \4\4     \4\4\n"
			 << "\t\t\t     \4\4   \4\4\n"
			 << "\t\t\t      \4\4 \4\4\n"
			 << "\t\t\t       \4\4\4\n"
			 << "\t\t\t      \4\4 \4\4\n"
			 << "\t\t\t     \4\4   \4\4\n"
			 << "\t\t\t    \4\4     \4\4\n";
		break;
	case 'O':
		cout <<"\a\t\t\t      \4\4\4\4\4\n"
			 << "\t\t\t     \4\4   \4\4\n"
			 << "\t\t\t    \4\4     \4\4\n"
			 << "\t\t\t    \4\4     \4\4\n"
			 << "\t\t\t    \4\4     \4\4\n"
			 << "\t\t\t     \4\4   \4\4\n"
			 << "\t\t\t      \4\4\4\4\4\n";
		break;
	default:
		break;
	}*/
	/*cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t \\" << endl;
	system("cls");
	Sleep(100);
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t       \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t     \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t   \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t       \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\t\t     \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\t\t   \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t \\" << endl;
	Sleep(100);
	system("cls");
	cout << "\n\n\n\n\n\n\n\t       \\" << endl;
	Sleep(100);
	system("cls");

	cout << "\a      \4\4\4\4\4\n"
		<< "     \4\4   \4\4\n"
		<< "    \4\4     \4\4\n"
		<< "    \4\4     \4\4\n"
		<< "    \4\4     \4\4\n"
		<< "     \4\4   \4\4\n"
		<< "      \4\4\4\4\4\n";
	Sleep(200);*/

	char a[5] = "\0";
	int i = 0;
	while (check(a) != false)
	{
		limchar('1', '5', &a[i]);
		i++;
	}
	cout << "Finish" << endl;
}

