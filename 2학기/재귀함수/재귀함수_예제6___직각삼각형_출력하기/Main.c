#include <stdio.h>
void triangle(int h) {
	if (h <= 0)
		return;
	else {
		triangle(h-1);
		for (int i = 0; i < h; i++)
			printf("*");
		printf("\n");
	}
}

int main() {
	int h;
	scanf("%d", &h);
	triangle(h);
}
