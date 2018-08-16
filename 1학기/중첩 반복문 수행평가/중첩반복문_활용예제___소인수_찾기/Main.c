#include <stdio.h>
int main() {
	int n, temp = 0;
	
	scanf("%d", &n);
	
	for (int i = 2; i <= n; i++) {
		while (n % i == 0) {
			if (temp != i) printf("%d ", i);
			temp = i;
			n /= i;
		}
	}
	
	return 0;
}
