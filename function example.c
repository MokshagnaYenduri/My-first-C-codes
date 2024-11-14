#include <stdio.h>
int sum(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
int main()
{
	int a,b,s;
	printf("Input two numbers: ");
	scanf("%d%d",&a,&b);
	s=sum(a,b);
	printf("sum = %d",s);
}


