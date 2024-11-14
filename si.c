#include <stdio.h>
int main()
{
	int n,a;
	float f;
	scanf("%d", &n);
	printf("%d\n", n);
	a=n/2;
	f=(float)n/2;
	printf ("%d\n",a);
	printf ("%f\n",f);
	if (a==f){
		printf("Number is even");
	} else{
		printf("Number is odd");
	}
}
