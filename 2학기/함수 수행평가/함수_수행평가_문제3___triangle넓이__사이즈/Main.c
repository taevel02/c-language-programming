#include <stdio.h>
double triagle_size(int n) {
	double size = 0;
	size = n * n * 0.5;
	printf("%.2lf\n", size);
}

void print_triangle(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	
	triagle_size(n);
	print_triangle(n);
}
