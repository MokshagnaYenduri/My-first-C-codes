#include <stdio.h>
//#include<sys/wait.h>
//#include<unistd.h>
int main()
{
	int a=0, b=1, c,i,j;
	char z;
	for (i=0; a+b<=1000000; i++){
	
	c=a+b;
	a=b;
	b=c;

	
	printf("%d\n", c);
 //wait(NULL);
 }
}
