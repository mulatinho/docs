#include "headers.h"

void func02(int i, int j)
{
	int res = myfunc_max(i, j);
	fprintf(stdout, 
		"in(%d,%d) maximo: %d\n", 
		i, j, res);
}
