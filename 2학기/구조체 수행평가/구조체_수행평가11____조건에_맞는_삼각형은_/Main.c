#include <stdio.h>
#include <string.h>
struct Triangle{
   char color[20];
   int bottom;
   int height;
};

int SearchTriangle(struct Triangle t[], char want[], double wish){
   int cnt = 0;
   for(int i = 0; i<5; i++){
      if(strcmp(t[i].color,want) == 0 && (t[i].bottom*t[i].height/2) >= wish) cnt++;
   }
   return cnt;
}
   
int main() {
   struct Triangle t[5];
   for(int i = 0; i<5; i++) scanf("%s %d %d", t[i].color, &t[i].bottom, &t[i].height);
   char want[20];
   double wish;
   scanf("%s %lf", want, &wish);
   printf("%d", SearchTriangle(t, want, wish));
   return 0;
}