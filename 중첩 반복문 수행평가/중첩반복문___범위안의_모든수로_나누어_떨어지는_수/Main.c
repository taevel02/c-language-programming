#include <stdio.h>
int main()
{
	int a;
	int i, j;
	int k = 0;
	scanf("%d", &a);

	for (i = a; ; i++) {
		for (j = 1; j <= a; j++) {
			if (i%j != 0)
				k++;
		}

		if (k != 0) {
			k = 0;
			continue;
		}
		else
			break;
	}

	printf("%d", i);

	return 0;
}