#include <stdio.h>
int main() {
	int k, m, sum = 0;
	scanf("%d", &k);
	m = k;
	
	if (m < 0) k *= -1;
	
	for (int i = k; i%10>0; i = i/10)
		sum += i%10;
	
	if (m < 0) sum *= -1;
	
	printf("%d", sum);
	return 0;
}
