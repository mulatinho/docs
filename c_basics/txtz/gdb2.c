#include <stdio.h>
int main(void) {
  char *things[] = 
  { "casa", "carro", "viajar" };
  int i = 0, x = 0, j = 0;
  while (1) {
    if (x == 11) break;
    printf("i=%d, x=%d, j=%d, %s\n", 
      i, x, j, things[i]);
    if (!(i % 3) && i!=0) {
      i = 0; x+=2;
    } else
      i++;
      
    x++;
    j = ((2^4) * i) + x;
  }
  return 0;
}
