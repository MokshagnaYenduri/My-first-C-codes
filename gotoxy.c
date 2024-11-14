#include<stdio.h>
#include<windows.h>
void gotoxy(short x, short y)
{
    COORD pos = {x,y};//sets co-ordinates in(x,y)
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
int main()
{
   gotoxy(10,12);
   printf("Aman Yadav");
   return 0;
 }  
