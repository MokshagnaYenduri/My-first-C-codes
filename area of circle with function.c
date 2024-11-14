#include <stdio.h>
float per(float r)
{
	float a;
	a=(float)2*3.14*r;
	return a;
}
float area(float r)
{
	float p;
	p=(float)3.14*r*r;
	return p;
}
int main()
{
	float r,a,p;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	a=area(r);
	p=per(r);
	printf("The area of circle is %f",a);
	printf("\nThe perimeter of the circle is %f",p);
}
