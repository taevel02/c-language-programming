#include <stdio.h>
int main() {
	int a, b, count = 0;
	scanf("%d %d", &a, &b);
	
	for (int i = a; i <= 1000; i++) {
		if (i % a == 0 && i % b == 0)
			count++;
	}
	
	printf("%d", count);
}
