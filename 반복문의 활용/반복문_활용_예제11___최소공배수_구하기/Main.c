#include <stdio.h>
int main() {
	int n, m, i;
	scanf("%d %d", &n, &m);
	
	for (int i = n; ; i++) {
		if (i % n == 0 && i % m == 0) { printf("%d", i); return 0; }
	}
}
