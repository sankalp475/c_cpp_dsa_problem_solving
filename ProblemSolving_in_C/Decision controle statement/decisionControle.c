#include <stdio.h>

int  main(void) {

	int num;
	printf("ENter the number: ");
	scanf("%d", &num);
	if(num>0) {
		printf(" Positive number ");
	} else {
		printf(" Non Positive number ");
	}

	int x;
	printf("Enter the number: ");
	scanf("%d", &x);
	if(x%5==0) {
		printf(" divisible by five ");
	} else {
		printf(" not divisible by 5 ");
	}

	int num1;
	printf("ENter the number: ");
	scanf("%d", &num1);
	if(num1%2==0) {
		printf(" Even number");
	} else {
		printf(" not a positive number ");
	}
	return 0;
}