#include <stdio.h>
int main()
{
	int n;
	float g;
	printf("Input the day: ");
	scanf("%d",&n);
	g=(float)(n*(n+1)*(2*n+1)/6)*0.03;
//	lit=(float)g*0.03;
	printf("The amount of water on the %d day is %.2f",n,g);
}
