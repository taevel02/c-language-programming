#include <stdio.h>
int main() {
	int k, tmp = 1;
	scanf("%d", &k);
	
	for (int i = 1; i < k; i++) {
		tmp += 4;
	}
	printf("%d", tmp);
}
