#include <stdio.h>
int main()
{
	int a,b,c,s;
	float avg;
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	s=a+b+c;
	avg=(float)s/3;
	printf("%d and %.2f are the sum and average of %d, %d, %d respectively",s,avg,a,b,c);
}
