#include <stdio.h>
#include <string.h>
struct ShoppingList{
   char name[20];
   char type[20];
   int num;
};
int main() {
   int a;
   char want[20];
   int sum = 0;
   struct ShoppingList s[10];
   scanf("%d", &a);
   for(int i = 0; i<a; i++){
      scanf("%s %s %d", s[i].name, s[i].type, &s[i].num);
   }
   scanf("%s", want);
   for(int i = 0; i<a; i++){
      if(strcmp(want, s[i].type) == 0){
         sum+=s[i].num;
      }
   }
   printf("%d", sum);
   return 0;
}