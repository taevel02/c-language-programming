#include <stdio.h>
int square(int a, int b);

int square(int a, int b) {
	int temp = a;
	
	for (int i = 1; i < b; i++)
		a = a*temp;
	
	return a;
}

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d %d", square(a, b), square(b, a));
}
