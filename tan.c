#include <stdio.h>
#include <math.h>
int main()
{
	int d;
	float r, res;
	printf("Input the value in degrees: ");
	scanf("%d",&d);
	r=d*(3.14/180);
	res=tan(r);
	printf("The value of tan(%d) %.2f",d,res);
}
