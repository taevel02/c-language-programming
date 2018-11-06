#include <stdio.h>
struct HealthInfo{
   char name[20];
   double cm;
   double kg;
};

int main() {
   struct HealthInfo h;
   scanf("%s %lf %lf", h.name, &h.cm, &h.kg);
   h.cm /= 100;
   if((h.kg/(h.cm*h.cm))>= 25) printf("%s는 과체중입니다.", h.name);
   else if((h.kg/(h.cm*h.cm))< 18.5) printf("%s는 저체중입니다.", h.name);
   else printf("%s는 정상입니다.", h.name);
   return 0;
}