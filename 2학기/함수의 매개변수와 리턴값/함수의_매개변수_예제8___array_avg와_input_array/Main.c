#include <stdio.h>
void input_array(int (*p)[4]) {
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			scanf("%d", &p[i][j]);
	}
}

double array_avg(int (*p)[4]) {
	int s = 0;
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++)
			s += p[i][j];
	}
	return s/16.0;
}

int main() {
	int a[4][4];
	input_array(a);
	printf("%.02lf", array_avg(a));
	return 0;
}
