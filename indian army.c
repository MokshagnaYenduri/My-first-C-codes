#include<stdio.h>
#include<math.h>
int main()
{
	int ht;
	float a,d,r;
	printf("Input height of the tower and the angle of depression: ");
	scanf("%d%f",&ht,&a);
	r=(float)a*3.14/180;
	d=(float)ht/tan(r);
	printf("The distance of enemies from the tower of height %d is %.2f",ht,d);	 	
	
}
