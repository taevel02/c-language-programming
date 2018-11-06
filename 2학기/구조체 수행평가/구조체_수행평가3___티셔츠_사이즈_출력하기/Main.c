#include <stdio.h>
struct T_shirt{
   int modelnum;
   char color;
   int size;
};

int main() {
   struct T_shirt t;
   scanf("%d%c%d", &t.modelnum, &t.color, &t.size);
   
   if(t.color == 'R') printf("모델번호 : %d\n색상 : Red\n사이즈 : %d", t.modelnum, t.size/1000);
   else if(t.color == 'B') printf("모델번호 : %d\n색상 : Black\n사이즈 : %d", t.modelnum, t.size/1000);
   else printf("모델번호 : %d\n색상 : White\n사이즈 : %d", t.modelnum, t.size/1000);
   
   return 0;
}
