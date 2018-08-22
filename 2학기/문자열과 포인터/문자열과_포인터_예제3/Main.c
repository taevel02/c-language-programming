#include <stdio.h>
int main() {
   
   char a[100];
   scanf("%s",a);
   char *p = a;
   
   char b[100];
   scanf(" %s", b);
   char *p1 = b;
   int i;
   
   for(i = 0;*(p + i) != NULL && *(p1 + i) != NULL; i++)
      if(*(p + i) != *(p1 + i))
         break;
   
   if(*(p + i) == NULL && *(p1 + i) == NULL)
      printf("같다");
   
   else
      printf("다르다");
   return 0;
}