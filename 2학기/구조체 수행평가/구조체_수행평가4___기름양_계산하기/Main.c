#include <stdio.h>
struct CarInfo{
   char name[20];
   double li;
   double km;
};
int main() {
   struct CarInfo c;
   scanf("%s %lf %lf", c.name, &c.li, &c.km);
   printf("%.02lf", c.km/c.li);
   return 0;
}