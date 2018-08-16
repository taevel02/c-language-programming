#include <stdio.h>
int main() {
	float a;
	scanf("%f", &a);
	int b = a * 100;
	b = b % 10;
	
	printf("%d",b);
}
