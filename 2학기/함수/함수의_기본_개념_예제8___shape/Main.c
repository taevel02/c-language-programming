#include <stdio.h>

int rectangle(int a);
int tangle(int a);

int retangle(int a) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++)
			printf("*");
		printf("\n");
	}
}

int tangle(int a) {
	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
}

int main() {
	int a;
	char c;
	scanf("%c %d", &c, &a);
	
	if (c == 'r')
		retangle(a);
	else
		tangle(a);
}