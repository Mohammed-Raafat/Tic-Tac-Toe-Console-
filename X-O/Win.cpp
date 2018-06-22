//#include "2 Players.h"
//#include "Interface.h"
#include "Printing.h"

int i = 0;

/*void Print_Win()
{
	system("cls");
	Turn(matrix);



	
}*/

void Check_Win(char a[9], char ch)
{
	/*while (i < 9)
	{
		if (a[i] == a[i + 1] && a[i] == a[i + 2] && a[i] == ch)
		{
			Congratulation(ch);
		}
		i += 3;
	}

	while (i < 3)
	{
		if (a[i] == a[i + 3] && a[i] == a[i + 6] && a[i] == ch)
		{
			Congratulation(ch);
		}
		i++;
	}

	if (a[0] == a[4] && a[0] == a[8] && a[0] == ch)
	{
		Congratulation(ch);
	}
	else if (a[2] == a[4] && a[2] == a[6] && a[0] == ch)
	{
		Congratulation(ch);
	}*/

	if (a[0] == a[1] && a[0] == a[2] && a[0] == ch)
	{
		Congratulation(ch);
		
	}
	else if (a[3] == a[4] && a[3] == a[5] && a[3] == ch)
	{
		Congratulation(ch);
		
	}
	else if (a[6] == a[7] && a[6] == a[8] && a[6] == ch)
	{
		Congratulation(ch);
		
	}

	else if (a[0] == a[3] && a[0] == a[6] && a[0] == ch)
	{
		Congratulation(ch);
		
	}
	else if (a[1] == a[4] && a[1] == a[7] && a[1] == ch)
	{
		Congratulation(ch);
		
	}
	else if (a[2] == a[5] && a[2] == a[8] && a[2] == ch)
	{
		Congratulation(ch);
		
	}

	else if (a[0] == a[4] && a[0] == a[8] && a[0] == ch)
	{
		Congratulation(ch);
		
	}
	else if (a[2] == a[4] && a[2] == a[6] && a[2] == ch)
	{
		Congratulation(ch);
		
	}

}