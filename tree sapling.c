#include<stdio.h>
int main()
{
	int n;
	float x,h;
	printf("Enter the day you need for the height: ");
	scanf("%d",&n);
	h=2*n-1;
	x=h*2.54;
//	printf("The height of the sapling on the day %d is %.2f.",n,h);
	printf("The height of the sapling on the day %d in inches is %.1f and in centimeters is %.2f.",n,h,x);
	
}
