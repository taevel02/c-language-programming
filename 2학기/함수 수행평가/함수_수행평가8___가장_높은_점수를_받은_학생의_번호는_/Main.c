#include <stdio.h>

int max_avg(int std[100][4], int n){
   int i, mx = 0, mavg = std[0][3];
   for (i = 1; i < n; i++) {
      if (std[i][3] > mavg) {
         mx = i;
         mavg = std[i][3];
      }
   }
   return mx + 1;
}

int main() {
   int n, i, j, s;
   int student[100][4];
   scanf("%d", &n);
   for (i = 0; i < n; i++) {
      for (j = 0, s = 0; j < 3; j++) {
         scanf("%d", &student[i][j]);
         s += student[i][j];
      }
      student[i][3] = s;
   }
   printf("%d", max_avg(student, n));
   return 0;
}