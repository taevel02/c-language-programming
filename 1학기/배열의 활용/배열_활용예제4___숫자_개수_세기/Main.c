#include <stdio.h>
int main() {
	int count[10] = {0}, n, num;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d ", &num);
		count[num]++;
	}
	
	for (int i = 0; i < 10; i++)
		printf("%d ", count[i]);
}
