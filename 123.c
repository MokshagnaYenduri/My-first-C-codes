#include <stdio.h>
#include <windows.h>
#include <string.h>
void waitf()
{
	int z;
		for (z=0;z<9000000;z++){
	}
}
void gotoxy(int x, int y)
{

	COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
    
}
int main()
{
	int k=0,l=0,j=0,i=60;
	char ch[10];
	
	scanf("%s",&ch);
		int a;
	for (a=0;ch[a]!='\0';a++){
	}
	for (k=0;k<a;k++){
		for (l=0;l<29;l++){
			gotoxy(i+k,j+l);
			printf("%c",ch[k]);
			gotoxy(i+k,j+l-1);
			printf(" ");
			waitf();
		}
	}
	}	
