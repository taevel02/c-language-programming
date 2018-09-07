#include <stdio.h>

void divide(int a, int b, int *ahr, int *skajwl) {
	
	if (a > b) {
		*ahr = a / b;
		*skajwl = a % b;
	} else {
		*ahr = b / a;
		*skajwl = b % a;
	}
}

int main() {
	int *ahr = 0;
	int *skajwl = 0;
	int a, b;
	scanf("%d %d", &a, &b);
	divide(a, b, &ahr, &skajwl);
	printf("%d %d", ahr, skajwl);
}
