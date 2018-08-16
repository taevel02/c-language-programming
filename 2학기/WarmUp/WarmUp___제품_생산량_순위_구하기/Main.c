#include <stdio.h>
int main() {
	int n, num[2000], rank = 1;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
		scanf("%d", &num[i]);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (num[i] < num[j])
				rank++;
		}
		printf("%d\n", rank);
		rank = 1;
	}
}
