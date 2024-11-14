
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
	char ch[10];
	int i=60,j=0,k=0,l;
	scanf("%s",&ch);
	for (k=0;k<strlen(ch);k++){
		for (l=0;l<29;l++){
			gotoxy(i+k,j+l);
			printf("%c",ch[k]);
			gotoxy(i+k,j+l-1);
			printf(" ");
			waitf();
			//gotoxy(i+1,j+k);
			}
		}//printf("%d",strlen(ch));
}

