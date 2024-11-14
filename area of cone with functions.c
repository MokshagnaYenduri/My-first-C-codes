#include <stdio.h>
float areaof(float r, float h);
int main()
{
	float r,h,ar;
	printf("Input thr radius and height of the cone: ");
	scanf("%f%f",&r,&h);
	ar=areaof(r,h);
	printf("The volume of the give cone is %.2f",ar);
}
float areaof(float r, float h)
{
	float z;
	z=(float)1/3*3.14*r*r*h;
	return z;
}
