#include <stdio.h>

int  main(void) {
    int x=4,y=4;
    for(int i=1;i<=7;i++) {
		if(i<=4) {
			for(int j=1;j<=7;j++) {
	            if(j>=5-i && j<=3+i)
					printf("*");
				else
					printf(" ");
			}
		} else printf(" ");
		printf("\n");
		if(i>=4) {
			for(int k=1;k<=7;k++) {
	            if(k<x || k>y)
					printf("*");
				else
					printf(" ");
			}
	        x--;
			y++;
		}

	}
	return 0;
}