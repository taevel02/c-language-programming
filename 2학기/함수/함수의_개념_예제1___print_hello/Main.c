#include <stdio.h>
char print_hello();

char print_hello() {
	return printf("Hello\n");
}

int main() {
	int a;
	scanf("%d", &a);
	
	for (int i = 0; i < a; i++)
		print_hello();
}
