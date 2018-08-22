#include <stdio.h>
int main() {
   char a[50], b[50];
   scanf("%s %s", a, b);
   int i = 0;
   char *c = a, *d = b;
   for(i = 0; *(c + i) != NULL; i++)
      printf("%c", *(c + i));
   
   for(i = 0; *(d + i)!= NULL; i++)
      printf("%c", *(d + i));
   return 0;
}