#include <stdio.h>
void hanoi(int n, char from, char by, char to, int * c) {
	(*c)++;
	if (n == 1)
		printf("%d번 원반 %c에서 %c로 이동\n", n, from, to);
	else {
		hanoi(n-1, from, to, by, c);
		printf("%d번 원반 %c에서 %c로 이동\n", n, from, to);
		hanoi(n-1, by, from, to, c);
	}
}

int main() {
	int n, count = 0;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C', &count);
	printf("%d", count);
	return 0;
}
