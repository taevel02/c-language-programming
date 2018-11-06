#include <stdio.h>
struct Top5{
   char name[50];
   int num;
   int money;
};
int main() {
   struct Top5 t[5];
   int max = 0;
   for(int i = 0; i<5; i++){
      scanf("%s %d %d", t[i].name, &t[i].num, &t[i].money);
   }
   for(int i = 1; i<5; i++){
         if(t[max].num*t[max].money < t[i].num*t[i].money){
            max = i;
         }
   }
   printf("%s", t[max].name);
   return 0;
}