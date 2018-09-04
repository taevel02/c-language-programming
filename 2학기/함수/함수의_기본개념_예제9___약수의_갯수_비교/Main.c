#include <stdio.h>
int count_divisor(int a);

int count_divisor(int a) {
	int count = 0;
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) count++;
	}
	
	return count;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	int temp = count_divisor(a);
	int temp2 = count_divisor(b);
	
	if (temp > temp2)
		printf("%d", a);
	else if (temp2 > temp)
		printf("%d", b);
	else
		printf("%d %d", a, b);
}
