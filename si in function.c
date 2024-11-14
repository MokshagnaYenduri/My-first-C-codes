#include <stdio.h>
float si(int p, int t, int r);
int main()
{
	int p,t,r;
	float s;
	printf("Enter the Principal amount, time and rate of interest: ");
	scanf("%d%d%d",&p,&t,&r);
	s=si(p,t,r);
	printf("The simple interest is %.2f",s);
}
float si(int p, int t, int r)
{
	float z;
	z=(float)(p*t*r)/100;
	return z;
}
