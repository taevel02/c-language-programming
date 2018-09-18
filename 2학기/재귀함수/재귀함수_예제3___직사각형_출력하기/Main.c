#include <stdio.h>
void print_line(int n) {
	if (n < 1)
		return ;
	else {
		printf("*****\n");
		print_line(n-1);
	}
}

int main() {
	int a;
	scanf("%d", &a);
	print_line(a);
}
