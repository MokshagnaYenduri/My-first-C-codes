#include<stdio.h>
int main()
{
	int l,b,h,p,a;
	float cr;
//	float rs;
	printf("Input (l): ");
	scanf("%d",&l);
	printf("Input (b): ");
	scanf("%d",&b);
	printf("Input (h): ");
	scanf("%d",&h);
	printf("Input the cost of painting per sq cm in paise: ");
	scanf("%d",&p);
	a=2*(l*b+b*h+l*h);
	cr=(float)(a*p)/100;
	printf("The toal money required to paint the oil can is: %.2f",cr);
}
