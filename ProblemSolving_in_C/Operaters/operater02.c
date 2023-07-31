#include <stdio.h>

int  main(void) {

	//!  program 1: count number of digit in a number;
	int num;
	printf("Enter the number: ");
	scanf("%d", &num);
	printf("the sum of its digit are: %d\n", num % 10 + num / 10 % 10 + num / 10 / 10);

	 //! asci code of character plus
	printf("the ascii code of charccter ' %c' is %d\n", '+', '+');

	//! size of float char int double
	printf("\n the size of int is %d\n the size of char is %d\n the size of float is %d\n the size of double is %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

	//! make last digit of number stored as zero eg: 2345 -> 2340
	int num2;
	printf("Enter the number: ");
	scanf("%d", &num2);
	printf("\nnumber before: %d\n",num2);
	num2 = num2 / 10 * 10;
	printf("number after: %d\n",num2);

	//! wap which take 2 input and one numer and one digit and make the last digit of number as 2nd input

	int n1, d1;
	printf("enter a number and a digit: ");
	scanf("%d %d", &n1, &d1);
	printf("\nnumber before: %d\n", n1);
	n1 = n1 / 10 * 10 + d1;
	printf("number after: %d", n1);
	printf(" one digit %d is added\n", d1);


	//! inr to usd conversioin
	float inr, inr_val = 84.23, usd;
	printf("Enter the inr to convert it to usd: ");
	scanf("%f", &inr);
	usd = inr / inr_val;
	printf(" the value of (inr): %.1f in (usd): %.1f \n", inr, usd);

	//! rotate a numer one digit right side
	int r,x;
	printf("enter the number: ");
	scanf("%d", &r);
	x = r;
	printf("number before: %d\n", x);
	x = r % 10 * 100 + r / 10;
	printf("number after: %d\n", x);

	printf(" the value of x is %d \n",10 > 8 > 4);
	printf(" the value of x is %d \n", !2 > -2);
	printf(" the value of x is %d \n", 3 < 0 && 5 > 0);
	return 0;
}