#include <stdio.h>
#include <math.h>
int main()
{
	int m,p;
	float h;
	printf("Input the values of mass(M) and potential energy(PE): ");
	scanf("%d%d",&m,&p);
	h=(float)(m*9.8/p)/2.20;
	printf("The height of the box is %.2f",h);
	
}
