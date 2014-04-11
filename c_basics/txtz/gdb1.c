#include <stdio.h>

void set_pointer(char *p)
{
	*p = 10;
}

int main(void)
{
	char *p = NULL;
	
	set_pointer(p);
	
	return 0;
}
