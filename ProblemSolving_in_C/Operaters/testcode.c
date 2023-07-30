#include <stdio.h>

int  main(void) {

	int x = 1, y;
	y = ++x + x++;
	// y = ++x + ++x;
	printf("%d %d", x, y);
	return 0;
}