#include <stdio.h>;
int main()
{
	int n,x;
	float res;
	printf("Input the number of day and time taken to solve each sum: ");
	scanf("%d%d",&n,&x);
	res=(float)((n*(n+1)/2)*x)/60;
	printf("No of hours spent on day %d is %f",n,res);
}
