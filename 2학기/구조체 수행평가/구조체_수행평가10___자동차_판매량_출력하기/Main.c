#include <stdio.h>
struct CarSellingInfo{
   char name[50];
   char company[50];
   int num;
};

int GetTotalCount(struct CarSellingInfo c[], char want[]){
   int cnt = 0;
   for(int i = 0; i<5; i++){
      if(strcmp(c[i].company, want) == 0) cnt+=c[i].num;
   }
   return cnt;
}

int main() {
   struct CarSellingInfo c[5];
   for(int i = 0; i<5; i++) scanf("%s %s %d", c[i].name, c[i].company, &c[i].num);
   char want[50];
   scanf("%s", want);
   printf("%d", GetTotalCount(c, want));
   return 0;
}