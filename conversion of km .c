#include <stdio.h>
int main()
{
	float km, m, feet , inches ,cm;
	printf("\n enter the distance in km");
	scanf("%f", &km);
	m = km*1000;
    cm = m*100;
	inches = cm/2.5;
	feet = inches/12;
	printf("distance in m= %f\n", m);
	printf("distance in cm=%f\n", cm);
	printf("distance in inches=%f\n", inches);
	printf("distance in feet=%f\n", feet);
}
