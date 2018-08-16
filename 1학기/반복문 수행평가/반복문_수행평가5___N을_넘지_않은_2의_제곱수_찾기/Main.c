#include <stdio.h>
int main() {
	int n, n2 = 2, i = 0;
	scanf("%d", &n);
	
	while (n2 < n) {
		n2 *= 2;
		i++;
	}
	
	printf("%d", i);
	
	return 0;
}
