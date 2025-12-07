#include <stdio.h>

int main(void) {
   int i = 40;
   float x = 9.1f;
   printf("|%d|%5d|%-5d|%5.4d|\n", i, i, i, i);
   printf("|%10.3f|%10.3e|%-10g|%10g|\n", x, x, x, x);
   return 0;
}