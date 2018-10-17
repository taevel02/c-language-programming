#include <stdio.h>

struct student {
   int num;
   int ko, ma, en;
   float avg;
} a[105];

int main()
{
   int n;
   
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
      scanf("%d %d %d %d", &a[i].num, &a[i].ko, &a[i].ma, &a[i].en);
   
   for (int i = 0; i < n; i++) a[i].avg = (a[i].ko+a[i].ma+a[i].en)/3.0;
   
   float k = 0;
   for (int i = 0; i < n; i++)
      k += a[i].avg;
   
   k /= n;
   printf("%.2f\n", k);
   
   for (int i = 0; i < n; i++)
      if (k <= a[i].avg) printf("%d\n", a[i].num);
   
   return 0;
}