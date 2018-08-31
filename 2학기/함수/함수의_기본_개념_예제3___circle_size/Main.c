#include <stdio.h>
double circle_size(double a);

double circle_size(double a) {
	return 3.14*a*a;
}

int main() {
	double a;
	scanf("%lf", &a);
	printf("%.2lf", circle_size(a));
}
