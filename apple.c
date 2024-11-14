#include <stdio.h>
int main()
{
	int cost;
	float apple;
	printf("Enter the cost of one dosen of apples: ");
	scanf("%d", &cost);
	apple=(float)cost/12;
	printf("The cost of one apple: %.2f", apple);
	
}
