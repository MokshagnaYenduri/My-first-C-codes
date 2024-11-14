#include <stdio.h>
int main()
{
	int mi;
	float km;
	printf("Enter distance in miles: ");
	scanf("%d",&mi);
	km=(mi/2)*1.6;
	printf("the distance two people should travel in kilometers is %.2f",km);
}
