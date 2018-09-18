#include <stdio.h>
int fact(int m) {
	if (m == 1)
		return 1;
	else
		return m*fact(m-1);
}

int main() {
	int m;
	scanf("%d", &m);
	printf("%d", fact(m));
}