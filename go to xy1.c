#include <stdio.h>
#include<windows.h>

void gotoxy(short x, short y)
{

	COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    
}
int main()
{
	char c;
	printf("A");
	scanf("%c",&c);
	gotoxy(0,5);
	printf("J");
	scanf("%c",&c);
	gotoxy(0,10);
	printf("A");
	scanf("%c",&c);
	gotoxy(0,15);
	printf("Y");
	scanf("%c",&c);
	gotoxy(0,20);
}

