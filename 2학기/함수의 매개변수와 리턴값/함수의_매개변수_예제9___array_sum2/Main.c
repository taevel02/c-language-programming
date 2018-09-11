#include <stdio.h>
void array_sum2(int x, int (*p)[4], int *s) {
	if (x == 0) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				s[i] += p[j][i];
			}
		}
	} else {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				s[i] += p[i][j];
			}
		}
	}
}

int main() {
	int a[4][4], axis, sum[4] = {0};
	
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			scanf("%d", &a[i][j]);
	scanf("%d", &axis);
	
	array_sum2(axis, a, sum);
	
	for (int i = 0; i < 4; i++)
		printf("%d ", sum[i]);
	return 0;
}
