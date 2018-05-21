#include <stdio.h>

int main() {
	int a = 1, k, i = 1, check = 0;
	scanf("%d", &k);
	
	while (k != i) {
		if (check == 0) {
			a -= 3;
			check = 1;
			i++;
		} else if (check == 1) {
			a += 5;
			check = 0;
			i++;
		}
	}
	printf("%d", a);
}
