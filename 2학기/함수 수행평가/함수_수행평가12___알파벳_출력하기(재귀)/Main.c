#include <stdio.h>

void print_Alphabet(char a, char b) {
   if (a == b) {
      printf("%c", a);
      return ;
   } else {
      printf("%c ", a);
      print_Alphabet(a + 1, b);
   }
}

int main() {
   char a, b;
   
   scanf("%c %c", &a, &b);
   print_Alphabet(a, b);
   
   return 0;
}