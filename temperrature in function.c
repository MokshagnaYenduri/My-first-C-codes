#include<stdio.h>
float converttemp(int c);
int main()	
{
	float c,f,t;
	printf("Input the temperature in celcius: ");
	scanf("%f",&c);
	t=converttemp(c);
	printf("The temperature in farenheit is %.2f",t);
}
float converttemp(int c)
{
	float z;
	z=(float)c*9/5+32.0;
	return z;
	
}
