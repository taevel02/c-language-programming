#include <stdio.h>
#include <string.h>

struct MoblieInfo{
   char name[50];
   char company[20];
   int num;
};

int main() {
   struct MoblieInfo m[10];
   int a;
   scanf("%d", &a);
   for(int i = 0; i<a; i++){
      scanf("%s %s %d", m[i].name, m[i].company, &m[i].num);
   }
   char str1[10] = "삼성", str2[10] = "LG";
   int n1 = 0, n2 = 0, n3 = 0;
   for(int i = 0; i<a; i++){
      if(strcmp(str1, m[i].company) == 0) n1++;
      else if(strcmp(str2, m[i].company) == 0) n2++;
      else n3++;
   }
   printf("삼성 : %d\nLG : %d\n애플 : %d", n1, n2, n3);
   return 0;
}