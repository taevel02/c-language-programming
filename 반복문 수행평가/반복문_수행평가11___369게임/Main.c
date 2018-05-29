#include <stdio.h>
int main() {
	int a, b, sum = 0;
	scanf("%d %d", &a, &b);

	for (int i = a; i <= b; i++) {
		if (i / 1000 == 3 || i / 1000 == 6 || i / 1000 == 9)
			sum++;
		if ((i % 1000) / 100 == 3 || (i % 1000) / 100 == 6 || (i % 1000) / 100 == 9)
			sum++;
		if ((i % 100) / 10 == 3 || (i % 100) / 10 == 6 || (i % 100) / 10 == 9)
			sum++;
		if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
			sum++;
	}
	
	printf("%d", sum);
	return 0;
}
