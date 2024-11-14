#include <stdio.h>
int main()
{
	int g;
	float lit, left;
	printf("Input the amount of milk in gallons: ");
	scanf("%d",&g);
	lit=g*3.78;
	left=lit-36;
	printf("The amount of milk left in liters: %.2f",left);
	
	
}
