#include <stdio.h>

int  main(void) {

	// int x, y, z;
	// scanf("%d %d %d", &x, &y, &z);
	// float x1 = x + y + z;
	// printf(" the average fo three number:(%d %d %d) is %f", x, y, z, x1/3);

	// int r;
	// scanf("%d", &r);
	// float pi = 3.14159265359, c = 2 * pi * r;

	// int si, p,r1,t;
	// printf("enter p,r,t where P = Principal, R = Rate of Interest, and T = Time period \n ");
	// scanf("%d %d %d", &p, &r1, &t);
	// si = (p * r1 * t)/100;
	// printf("simple intrest is %d",si);

	// int l, w, h;
	// printf("Enter the length, bredth, height: ");
	// scanf("%d %d %d", &l, &w, &h);
	// printf(" volume of cuboid is %d", l * w * h);

	// int cp,sp;
	// printf("Enter the cost prise per dezen: ");
	// scanf("%d", &cp);
	// printf("Enter the selling prise per dezen: ");
	// scanf("%d", &sp);
	// int profit = (sp-cp)*25/12;
	// printf(" profit for selling 25 bannas is %d \n",profit);

	// char x;
	// printf(" Enter the character: ");
	// scanf("%c", &x);
	// printf(" ascii code for this character '%c' is %d ", x, x);

	// int x;
	// printf("Enter the ascii code: ");
	// scanf("%d", &x);
	// printf(" the character corrsponding to ascii code: %d is %c", x, x);

	// int dd, mm, yy;
	// printf("Eenter the date in given formate 'DD/MM/YYYY': ");
	// scanf("%d/%d/%d", &dd, &mm, &yy);
	// printf("Day - %d, Month - %d, year - %d", dd, mm, yy);

	int hh, mm;
	printf("Enter the Time in given formate 'HH:MM' :-");
	scanf("%d:%d", &hh, &mm);
	printf("HH %d and MM %d", hh, mm);
	return 0;
}