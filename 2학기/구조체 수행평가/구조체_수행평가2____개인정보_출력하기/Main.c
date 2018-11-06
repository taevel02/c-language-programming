#include <stdio.h>
struct PersonInfo{
   char name[20];
   int fnum;
   int bnum;
};
int main() {
   struct PersonInfo p;
   scanf("%s %d-%d", p.name, &p.fnum, &p.bnum);
   if(p.bnum/1000000 == 3 || p.bnum/1000000 == 4)
      printf("이름 : %s\n나이 : %d\n생년월일 : %02d월 %02d일", p.name, 19-(p.fnum/10000), (p.fnum/100)%100, p.fnum%100);
   else
      printf("이름 : %s\n나이 : %d\n생년월일 : %02d월 %02d일", p.name, 19+(100-(p.fnum/10000)), (p.fnum/100)%100, p.fnum%100);
   return 0;
}