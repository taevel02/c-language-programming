#include <stdio.h>
int main() {
	char a[31];
	scanf("%s", a);
	int k;
	scanf("%d", &k);
	
	for (int i = 0; a[i] != NULL; i++) {
		for (int j = 0; j < k; j++)
			printf("%c", a[i]);
	}
}
