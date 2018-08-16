#include <stdio.h>
void main() {
	float a, b;
	scanf("%f %f", &a, &b);
	
	if (b != 0)
		printf("%.3f", a/b);
	else
		printf("나누기 연산을 할 수 없습니다.");
}
