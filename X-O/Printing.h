
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include "Interface.h"
#include "2 Players.h"
#include "Win.h"
using namespace std;


int Convert_char_to_int(char p);
void limchar(char BEGIN, char END, char* Output); // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.
void limchar1(char CHOICE, char* Output); // This function is made by Mahmoud Saeed Hamed (Mekki). All rightes reserved.
void limchar2(char arr[9], char BEGIN, char END, char* Output); 
bool End_of_array(char b[9]);

void Print_XO();
void Print_TicTacToc();
void Print_Main_Menu();
void How_To_Play();
void About();
int Exit();

void Print_Full();
void Turn(char a[9]);
void Choose_Main_Menu();

void Congratulation(char);

