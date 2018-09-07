#include <stdio.h>

void swap(double *a, double *b) {
	double temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	swap(&a, &b);
	printf("%.2lf %.2lf", a, b);
}
