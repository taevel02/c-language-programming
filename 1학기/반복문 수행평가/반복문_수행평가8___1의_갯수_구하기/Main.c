#include <stdio.h>
int main() {
	int n, count = 0;
	int a, b;
	scanf("%d", &n);
	
	for (int i = 0; i <= n; i++) {
		a = i%10;
		b = i%100/10;
		if (a == 1)
			count++;
		
		if (b == 1)
			count++;
	}
	
	printf("%d", count);
	
	return 0;
}
