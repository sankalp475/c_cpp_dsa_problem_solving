#include <stdio.h>

int main() {

	printf("1: Hello students \n");
	printf("2: Hello \n students \n");
	printf("3: \"MySirG\" \n");
	printf("4: \\n \n");
	printf("5: \\r \n");
	printf("6: \"Teacher's Day\" \n");
	int a,b;
	scanf("%d %d", &a, &b);
	printf("a+b=%d \n", a + b);

	int x;
	scanf("%d", &x);
	printf("squire is '%d' \n", x * x);

	int l,m;
	scanf("%d %d", &l, &m);
	printf("area of Rectangle is '%d' \n", l * m);

	int r;
	float pi = 3.14159265359;
	scanf("%d", &r);
	printf("Area of circle is %f having the radus %d", pi * r * r,r);
}