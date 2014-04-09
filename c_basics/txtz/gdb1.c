#include <stdio.h>
int main(void)
{
	int i = 0;
	int j[3];
	for(i=0; i<7; i++) {
		j[i] = i;
		printf("i=%d, j[%d]=%d\n", i, i, j[i]);
	}
	
	return 0;
}
