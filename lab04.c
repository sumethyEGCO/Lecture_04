#include <stdio.h>
#include <stdlib.h>

#define MAGIC_NUMBER 33

int main()
{
    int low = 0 ;
	int high = 99;
	int number;
	do{
		printf("Enter number (%d-%d) ", low, high);
		scanf("%d", &number);
		if (number > MAGIC_NUMBER){
			high = number - 1;
			printf("\nThis number is greater than the critical number\n");
		}
		else if (number < MAGIC_NUMBER){
			low = number + 1;
			printf("high is: %d", high);
			printf("\nThis number is less than the critical number\n");
		}
	} while (number != MAGIC_NUMBER);
	printf("Congratulation! %d is the critical number", MAGIC_NUMBER);
}
