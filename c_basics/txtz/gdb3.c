#include <stdio.h>
#include <string.h>

void func(char *buf) 
{
	char rec[15];
	strcpy(rec, buf);
}
int main(void)
{
	char *str = "eu tenho mais que 15 bytes";
	func(str);
	return 0;
}
