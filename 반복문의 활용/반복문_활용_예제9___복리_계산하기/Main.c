#include <stdio.h>
int main() {
	double n, a = 1000000;
	scanf("%lf", &n);
	
	// sum = 원금 + 이자
	for (int i = 0; i < n; i++) {
		a*=1.05;
	}
	
	printf("%.0lf원\n", a);

	return 0;
}
