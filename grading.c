#include <stdio.h>
int main()
{
	int m;
	printf("Input marks: ");
	scanf("%d", &m);
	if (m<50){
		printf("Grade F");
	}
	else if (m<60){
		printf("Grade C");
	}
	else if (m<70){
		printf("Grade B");
	}
	else if (m<80){
		printf("Grade A");
	}
	else{
		printf("Grade O");
		
	}

	
}
