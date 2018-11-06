#include <stdio.h>
struct SmartFarm{
   char name[20];
   int num;
   int profit;
};

int CalProfit(struct SmartFarm s[], char want[]){
   for(int i = 0; i<5; i++){
      if(strcmp(s[i].name, want) == 0) return s[i].num*s[i].profit;
   }
   return 0;
}

int main() {
   struct SmartFarm s[5];
   for(int i = 0; i<5; i++) scanf("%s %d %d", s[i].name, &s[i].num, &s[i].profit);
   char want[20];
   scanf("%s", want);
   printf("%d", CalProfit(s, want));
   return 0;
}