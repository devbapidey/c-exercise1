#include<stdio.h>
void main(void) {
	int i=1,j=3;
	while(i<5) {
		i++;
		if (j==0)
			break;
		j--;
	}
	printf("%d %d\n",i,j);
}
