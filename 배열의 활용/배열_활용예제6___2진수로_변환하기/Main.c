#include <stdio.h>
int main() {
	
int input, a[1000], count = 0;

scanf("%d", &input);

for (int i = 0; input > 0; i++) {
	a[i] = input % 2;
	input = input / 2;
	count++;
}

for (int i = count - 1; i >= 0; i--)
	printf("%d", a[i]);
	
}