#include<stdio.h>
int main()
{
	float bp, da, hra, grpay;
	printf("\nEnter basic salary of Ramesh:");
	scanf("%f", &bp);
	da=0.4*bp;
	hra=0.2*bp;
	grpay=bp+da+hra;
	printf("basic salary of Ramesh=%f\n", bp);
	printf("dearness allowance of Ramesh=%f\n", da);
	printf("house rent allowance=%f\n", hra);
	printf("gross pay of ramesh is %f\n", grpay);
	
}
