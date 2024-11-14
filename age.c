#include <stdio.h>
int main()
{
	int a;
	printf("Input Age: "
	);
	scanf("%d", &a);
	if (a<=2){
		printf("Infant");
	}
	else if (a<=12){
		printf("Child");
	}
	else if (a<=19){
		printf("Teenager");
	}
	else if (a<=40){
		printf("Youth");
	}

	else if (a<=60){
		printf("Middle Age");
	}
	else{
		printf("Old Age");
	}
}
