#include <stdio.h>

int  main(void) {

	//! program 1: program to calculate size of character constant
	char x;
	printf("Enter the program to calculate size of a character constant:");
	scanf("%c", &x);
	printf(" the size of character constant '%c' is %d", x, sizeof(x));

	//! program 2: program to calculate size of real constant
	float x;
	printf("Enter the program to calculate size of a real constant:");
	scanf("%f", &x);
	printf(" the size of character constant '%.2f' is %d", x, sizeof(x));

	//! program 3: wap wich increment character constent using increment operater
	char ch = 'A';
	printf("Before increment: %c\n",ch);
	++ch;
	printf("After increment: %c\n",ch);

	//! program 4: wap wich print unit digit of a given number
	int num, unit_val;
	printf("Enter the number: ");
	scanf("%d", &num);
	unit_val = num % 10;
	printf("the unit digit of a given number %d is %d", num, unit_val);

	//! program 5: wap wich print given number without last digit
	int num, val;
	printf("Enter the number: ");
	scanf("%d", &num);
	val = num / 10;
	printf("number %d without last digit is %d", num, val);

	//! program 6: wap to swap a two numer;
	int x, y, z;
	printf("Enter the two number: ");
	scanf("%d %d", &x, &y);

	printf("the value of a before is %d\n", x);
	printf("the value of b before is %d\n", y);
	z = x;
	x = y;
	y = z;
    printf("the value of a after is %d\n", x);
	printf("the value of b after is %d\n", y);

	//! program 7: wap to swap a two numer without using therd variable;
	int x, y, z;
	printf("Enter two number: ");
	scanf("%d %d", &x, &y);

	printf("the value of a before is %d\n", x);
	printf("the value of b before is %d\n", y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("the value of a after is %d\n", x);
	printf("the value of b after is %d\n", y);

	//! program 8: wap to swap a two numer without using therd variable;
	int x, y, z;
	printf("Enter two number: ");
	scanf("%d %d", &x, &y);

	printf("the value of a before is %d\n", x);
	printf("the value of b before is %d\n", y);
	x = x * y;
	y = x / y;
	x = x / y;
	printf("the value of a after is %d\n", x);
	printf("the value of b after is %d\n", y);

	//! program 9: wap to swap a two numer without using arithmatic operater and third variable;

	return 0;
}