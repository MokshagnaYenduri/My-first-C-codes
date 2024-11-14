#include <stdio.h>
float avg(float a, float b, float c)
{
	float z;
	z=(float)(a+b+c)/3;
	return(z);
}
int main()
{
	float g,a,b,c;
	printf("Insert three numbers: ");
	scanf("%f%f%f",&a,&b,&c);
	g=avg(a,b,c);
	avg(a,b,c);
	printf("The average of three numbers is %.2f",g);
}
