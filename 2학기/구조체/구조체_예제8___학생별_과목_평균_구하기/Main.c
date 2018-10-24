#include <stdio.h>

struct student {
   int num;
   char name[20];
   int a, b, c, d, e, f, g, h, i, j;
   float avg;
} x[105];

int main()
{
   int n;
   float max = 0, min = 10000000;
   int p, q;
   
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
      scanf("%d %s %d %d %d %d %d %d %d %d %d %d", &x[i].num, x[i].name, &x[i].a, &x[i].b, &x[i].c, &x[i].d, &x[i].e, &x[i].f, &x[i].g, &x[i].h, &x[i].i, &x[i].j);
   
   for (int i = 0; i < n; i++) 
      x[i].avg = (x[i].a+x[i].b+x[i].c+x[i].d+x[i].e+x[i].f+x[i].g+x[i].h+x[i].i+x[i].j)/10.0;
   
   for (int i = 0; i < n; i++) {
      if (max < x[i].avg) {
         max = x[i].avg;
         p = i;
      }
      if (min > x[i].avg) {
         min = x[i].avg;
         q = i;
      }
   }
   
   printf("%d %s\n", x[p].num, x[p].name);
   printf("%d %s\n", x[q].num, x[q].name);
   
   return 0;
}