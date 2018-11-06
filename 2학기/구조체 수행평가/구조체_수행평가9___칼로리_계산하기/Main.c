#include <stdio.h>
#include <string.h>
struct FoodInfo{
   char name[20];
   int kal;
};
int GetCal(struct FoodInfo fo[], char want[]){
   for(int i = 0; i<5; i++){
      if(strcmp(fo[i].name, want) == 0) return fo[i].kal;
   }
   return 0;
}
int main() {
   struct FoodInfo fo[5];
   char want[20];
   int gram;
   for(int i = 0; i<5; i++){
      scanf("%s %d", fo[i].name, &fo[i].kal);
   }
   scanf("%s %d", want, &gram);
   int res = GetCal(fo, want);
   if(res == 0) printf("알수없음");
   else printf("%d", res*gram/10);
   
   return 0;
}