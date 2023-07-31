#include <stdio.h>

int  main(void) {

	//!  program 1: count number of digit in a number;
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("the sum of its digit are: %d", num % 10 + num / 10 % 10 + num / 10 / 10);
	return 0;
}