#include <stdio.h>
int main() {
   char a[100];
   scanf("%s", a);
   char *p = a;
   char b;
   scanf(" %c" ,&b);
   int cnt = 0;
   while(*p != NULL){
      if(*p == b){
         break;
      }
      p++;
   }
   if(*p == NULL)
      printf("해당 문자 없음");
   else
      printf("%s", p);
   return 0;
}