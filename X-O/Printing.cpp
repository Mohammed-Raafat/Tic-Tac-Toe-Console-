#include "Printing.h"
char Matrix[9] = "\0";
char back;

int Convert_char_to_int(char p)
{
	int g;
	switch (p)
	{
	case '1':
		g = 0;
		break;
	case '2':
		g = 1;
		break;
	case '3':
		g = 2;
		break;
	case '4':
		g = 3;
		break;
	case '5':
		g = 4;
		break;
	case '6':
		g = 5;
		break;
	case '7':
		g = 6;
		break;
	case '8':
		g = 7;
		break;
	case '9':
		g = 8;
		break;
	default:
		break;
	}
	return g;
}

void limchar(char BEGIN, char END, char* Output) // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.
{
	char hold;
	while (true)
	{
		hold = _getch();
		if (hold >= BEGIN && hold <= END) //Must be a value between (BEGIN - END)
		{
			*Output = hold;
			break;
		}
	} //End Of Loop
} // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.

void limchar1(char CHOICE, char* Output) // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.
{
	char hold;
	while (true)
	{
		hold = _getch();
		if (hold == CHOICE) //Must be a value between (BEGIN - END)
		{
			*Output = hold;
			break;
		}
	} //End Of Loop
} // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.

void limchar2(char arr[9], char BEGIN, char END, char* Output)
{
	char hold;
	while (true)
	{
		hold = _getch();

		if (hold >= BEGIN && hold <= END) //Must be a value between (BEGIN - END)
		{
			//if (arr[Convert_char_to_int(hold)] == '\0')
			{
				*Output = hold;
				break;
			}
		}
	}
}

bool End_of_array(char b[9])
{
	int counter = 8;
	for (int i = 0; i <	9; i++)
	{
		if (b[i] == '\0')
			counter--;
	}
	if (counter == 0)
		return false;
	else 
		return true;
}

void Print_XO()
{
	cout << "\n\n\n\n\n\n\t\t\t\t\4\4     \4\4\t  \4\4\4\4\4\n"
		<< "\t\t\t\t \4\4   \4\4\t \4\4   \4\4\n"
		<< "\t\t\t\t  \4\4 \4\4\t\t\4\4     \4\4\n"
		<< "\t\t\t\t   \4\4\4\t\t\4\4     \4\4\n"
		<< "\t\t\t\t  \4\4 \4\4\t\t\4\4     \4\4\n"
		<< "\t\t\t\t \4\4   \4\4\t \4\4   \4\4\n"
		<< "\t\t\t\t\4\4     \4\4\t  \4\4\4\4\4\n";
}

void Print_TicTacToc()
{
	Sleep(1000);
	cout << "\n\t\t\tTic" << endl;
	Sleep(500);
	cout << "\n\t\t\t\t\tTac" << endl;
	Sleep(500);
	cout << "\n\t\t\t\t\t\t\tToe" << endl;
	Sleep(500);
}

void Print_Main_Menu()
{
	system("cls");
	Sleep(1000);
	Print_XO();
	cout << "\t\t\t\t-------------------------\n"
		<< "\t\t\t\tTic\t   Tac\t      Toe\n"
		<< "\t\t\t\t-------------------------\n";
	Sleep(1000);
	cout << "\n\n\n\t\t\t\tPlease ,Choose one of this choices :\n"
		<< "\n\t\t\t\t(1) 2 Players\n"
		<< "\n\t\t\t\t(2) Playing with the computer\n"
		<< "\n\t\t\t\t(3) How to play\n"
		<< "\n\t\t\t\t(4) About\n"
		<< "\n\t\t\t\t(5) Exit\n\n";
}

void How_To_Play()
{
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t** How to play :\n";
}

void About()
{
	system("cls");
	cout << "\n\n\n\n\n\n\t\t\t** Created by :\n"
		<< "\n\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n"
		<< "\t\t\t\xB2-------------------------------\xB2\n"
		<< "\t\t\t\xB2\xB2\xB2\xB2 Mohammed Raafat Ibrahim \xB2\xB2\xB2\xB2\n"
		<< "\t\t\t\xB2-------------------------------\xB2\n"
		<< "\t\t\t\xB2\tSOFTWARE ENGINEER\t\xB2\n"
		<< "\t\t\t\xB2\tProgrammer\t\t\xB2\n"
		<< "\t\t\t\xB2\tWeb Designer\t\t\xB2\n"
		<< "\t\t\t\xB2\tWeb Developer\t\t\xB2\n"
		<< "\t\t\t\xB2\t\t\t\t\xB2\n"
		<< "\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	Sleep(5000);
	cout << "\n\n\t\t\tPress 0 to back to the Main Menu ..." << endl;
	limchar1('0', &back);
	if (back == '0')
	{
		Print_Main_Menu();
		Choose_Main_Menu();
	}
}

int Exit()
{
	system("cls");
	Sleep(500);
	system("Color 70");
	cout << "\n\n\n\n\n\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n"
		<< "\t\t\t*************************************\n"
		<< "\t\t\t*  \1 THANKS FOR USING MY PROGRAM \1  *\n"
		<< "\t\t\t*************************************\n"
		<< "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n";
	Sleep(3000);
	exit(EXIT_SUCCESS);
}


void Print_Full()
{
	cout << "\n\n"
		<< "\t\t\t\t\t\t\t-------------\n"
		<< "\t\t\t\t\t\t\t| 1 | 2 | 3 |\n"
		<< "\t\t\t\t\t\t\t-------------\n"
		<< "\t\t\t\t\t\t\t| 4 | 5 | 6 |\n"
		<< "\t\t\t\t\t\t\t-------------\n"
		<< "\t\t\t\t\t\t\t| 7 | 8 | 9 |\n"
		<< "\t\t\t\t\t\t\t-------------\n";
}

void Turn(char a[9])
{
	system("cls");
	cout << "\n\t-------------\n"
		<< "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |\n"
		<< "\t-------------\n"
		<< "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |\n"
		<< "\t-------------\n"
		<< "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |\n"
		<< "\t-------------\n\n";
}

void Choose_Main_Menu()
{
	char x;
	limchar('1', '5', &x);

	switch (x)
	{
	case '1':
		_2_Players();
		break;
	case '3':
		How_To_Play();
		break;
	case '4':
		About();
		break;
	case '5':
		Exit();
		break;
	default:
		//Get_Error();
		break;
	}
}

void Congratulation(char xo)
{
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n";

	for (int j = 1; j <= 3; j++)
	{
		cout << "\a\t\t\t\tThe Winner is " << xo << endl;
		Sleep(200);
	}

	Sleep(300);
	system("cls");

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t       /" << endl;
	Sleep(100);
	system("cls");
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

	switch (xo)
	{
	case 'X':
		cout << "\a\t\t\t\t\t\t\t   \4\4     \4\4\n"
			<< "\t\t\t\t\t\t\t    \4\4   \4\4\n"
			<< "\t\t\t\t\t\t\t     \4\4 \4\4\n"
			<< "\t\t\t\t\t\t\t      \4\4\4\n"
			<< "\t\t\t\t\t\t\t     \4\4 \4\4\n"
			<< "\t\t\t\t\t\t\t    \4\4   \4\4\n"
			<< "\t\t\t\t\t\t\t   \4\4     \4\4\n";
		Sleep(200);
		break;
	case 'O':
		cout << "\a\t\t\t\t\t\t\t   \4\4\4\4\4\n"
			<< "\t\t\t\t\t\t\t  \4\4   \4\4\n"
			<< "\t\t\t\t\t\t\t \4\4     \4\4\n"
			<< "\t\t\t\t\t\t\t \4\4     \4\4\n"
			<< "\t\t\t\t\t\t\t \4\4     \4\4\n"
			<< "\t\t\t\t\t\t\t  \4\4   \4\4\n"
			<< "\t\t\t\t\t\t\t   \4\4\4\4\4\n";
		Sleep(200);
		break;
	default:
		break;
	}


	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t|" << endl;
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

	switch (xo)
	{
	case 'X':
		cout << "\a\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t      \4\4 \4\4\n"
			<< "\t\t\t       \4\4\4\n"
			<< "\t\t\t      \4\4 \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n";
		Sleep(200);
		break;
	case 'O':
		cout << "\a\t\t\t      \4\4\4\4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t      \4\4\4\4\4\n";
		Sleep(200);
		break;
	default:
		break;
	}


	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t \\" << endl;
	Sleep(100);
	system("cls");
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

	switch (xo)
	{
	case 'X':
		cout << "\a    \4\4     \4\4\n"
			<< "     \4\4   \4\4\n"
			<< "      \4\4 \4\4\n"
			<< "       \4\4\4\n"
			<< "      \4\4 \4\4\n"
			<< "     \4\4   \4\4\n"
			<< "    \4\4     \4\4\n";
		Sleep(200);
		break;
	case 'O':
		cout << "\a      \4\4\4\4\4\n"
			<< "     \4\4   \4\4\n"
			<< "    \4\4     \4\4\n"
			<< "    \4\4     \4\4\n"
			<< "    \4\4     \4\4\n"
			<< "     \4\4   \4\4\n"
			<< "      \4\4\4\4\4\n";
		Sleep(200);
	default:
		break;
	}
	system("cls");
	cout << "\n\n\n\n\n\t\t\t  CONGRATULATIONS" << endl;
	switch (xo)
	{
	case 'X':
		cout << "\n\n\n\a\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t      \4\4 \4\4\n"
			<< "\t\t\t       \4\4\4\n"
			<< "\t\t\t      \4\4 \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n";
		Sleep(200);
		break;
	case 'O':
		cout << "\n\n\n\a\t\t\t      \4\4\4\4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t    \4\4     \4\4\n"
			<< "\t\t\t     \4\4   \4\4\n"
			<< "\t\t\t      \4\4\4\4\4\n";
		Sleep(200);
		break;
	default:
		break;
	}
	cout << "\n\n\n\t\tYou will get back to the Main Menu ..." << endl;
	Sleep(3000);
	Print_Main_Menu();
}



