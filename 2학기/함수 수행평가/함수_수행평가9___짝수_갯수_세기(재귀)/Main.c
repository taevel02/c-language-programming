#include <stdio.h>
int cnt_even(int n, int cnt) {
   if(n == 0)
      return cnt;
   if(n % 2 == 0)
      cnt++;
   cnt_even(n-1, cnt);
}

int main() {
   int n, cnt = 0;
   scanf("%d", &n);
   printf("%d", cnt_even(n, cnt));
}