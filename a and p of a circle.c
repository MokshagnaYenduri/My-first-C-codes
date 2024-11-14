#include <stdio.h>
int main()
{
	float r,a,p;
	printf("Input radius: ");
	scanf("%f",&r);
	a=3.14*r*r;
	p=2*3.14*r;
	printf("%.2f and %.2f are the area and perimeter for the cirlce with given radius: %.2f",a,p,r);
	
} 
