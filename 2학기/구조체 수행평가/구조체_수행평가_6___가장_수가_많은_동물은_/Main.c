#include <stdio.h>

struct ZooInfo{
   char name[20];
   int num;
   char place[50];
};

int main() {
   struct ZooInfo zo[10];
   int a;
   scanf("%d", &a);
   for(int i = 0; i<a; i++){
      scanf("%s %d %s", zo[i].name, &zo[i].num, zo[i].place);
   }
   int max = 0;
   for(int i = 1; i<a; i++){
      if(zo[max].num<zo[i].num) max = i;
   }
   printf("%s %s", zo[max].name, zo[max].place);
   return 0;
}