#include <stdio.h>

int main() {
	int i = 1, n;
	scanf("%d", &n);

	while (i <= 100) {
		if (i % n == 0)
			printf("%d\n", i);
		i++;
	}
	
	return 0;
}