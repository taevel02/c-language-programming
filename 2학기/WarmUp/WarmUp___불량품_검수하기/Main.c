#include <stdio.h>
int main() {
	int k, m, sum = 0;
	scanf("%d", &k);
	m = k;
	
	for (int i = k; i > 0; i = i/10)
		sum += i%10;
	
	if (sum % 7 != 4)
		printf("Good");
	else
		printf("Bad");
}
