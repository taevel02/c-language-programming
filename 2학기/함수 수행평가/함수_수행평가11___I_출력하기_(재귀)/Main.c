#include <stdio.h>
int print_I(int n) {
	if (n <= 1) {
		printf("***\n");
		return ;
	} else {
		printf(" *\n");
		return print_I(n-1);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	
	printf("***\n");
	print_I(n-1);
}
