#include <stdio.h>
int main()
{
	float f, c;
	printf("Insert temperature in fahrenheit(f): ");
	scanf("%f",&f);
	c=(float)f-30*5/9;
	printf("%f is the temperature converted to celsius, converted from given fahrenheit %d",c,f);
}
