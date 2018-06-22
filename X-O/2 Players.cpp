
#include "Printing.h"
char position;
extern char Matrix[9];

void Put_Position(char p,char c)
{
	int pos=Convert_char_to_int(p);
	Matrix[pos] = c;
	Turn(Matrix);
	Check_Win(Matrix, c);	
}

void XO_Turn(char xo)
{
	Print_Full();
	cout << xo << "'s turn :" << endl;
	limchar2(Matrix, '1', '9', &position);
	Put_Position(position, xo);
}

void _2_Players()
{
	system("cls");
	Print_Full();
	Turn(Matrix);
	
	while (End_of_array(Matrix) != false)
	{
		XO_Turn('X');
		XO_Turn('O');
	}
	cout << "Failed" << endl;
}



/*switch (p)
	{
	case 1:
		matrix[0] = c;
		Turn(matrix);
		break;

	case 2:
		matrix[1] = c;
		Turn(matrix);
		break;

	case 3:
		matrix[2] = c;
		Turn(matrix);
		break;

	case 4:
		matrix[3] = c;
		Turn(matrix);
		break;
	case 5:
		matrix[4] = c;
		Turn(matrix);
		break;
	case 6:
		matrix[5] = c;
		Turn(matrix);
		break;
	case 7:
		matrix[6] = c;
		Turn(matrix);
		break;
	case 8:
		matrix[7] = c;
		Turn(matrix);
		break;
	case 9:
		matrix[8] = c;
		Turn(matrix);
		break;
	default:
		break;*/

/*for (int i = 0; i < 9; i++)
{
	cout << "X's turn :" << endl;
	cin >> position;
	Choose(position, 'X');

	cout << "O's turn :" << endl;
	cin >> position;
	Choose(position, 'O');
}*/

/*switch (choice)
	{
	case 1:
		a[0] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 2:
		a[1] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 3:
		a[2] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 4:
		a[3] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 5:
		a[4] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 6:
		a[5] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 7:
		a[6] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 8:
		a[7] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	case 9:
		a[8] = 'O';
		system("cls");
		cout << "\n\t-------------" << endl;
		cout << "\t| " << a[0] << " | " << a[1] << " | " << a[2] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[3] << " | " << a[4] << " | " << a[5] << " |" << endl;
		cout << "\t-------------" << endl;
		cout << "\t| " << a[6] << " | " << a[7] << " | " << a[8] << " |" << endl;
		cout << "\t-------------\n" << endl;
		break;
	default:
		break;
	}*/