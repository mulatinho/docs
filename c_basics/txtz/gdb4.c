#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    char *ptr = malloc(sizeof(int) * 100);
    
    srand(time(NULL));
    for (i=0; i<110; i++)
        *(ptr + i) = (rand() % 255) + 1;

    return 0;
}
