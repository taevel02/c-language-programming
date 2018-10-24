#include <stdio.h>
#include <string.h>

struct food {
   char name[20];
   int won;
} a[105];

int main()
{
   int n;
   char want[20];
   
   scanf("%d", &n);
   for (int i = 0; i < n; i++)
      scanf("%s %d", a[i].name, &a[i].won);
   scanf("%s", want);
   
   for (int i = 0; i < n; i++)
      if (strcmp(want, a[i].name) == 0) printf("%d원", a[i].won);
   
   return 0;
}