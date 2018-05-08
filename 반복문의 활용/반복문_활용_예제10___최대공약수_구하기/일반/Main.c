#include <stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	for (int i = m; 1 < i;) {
		if (n % i == 0 && m % i == 0) { printf("%d", i); return 0; } 
		else i--;
	}
	printf("1");
}
