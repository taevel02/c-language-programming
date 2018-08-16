#include <stdio.h>
int main() {
	float a;
	scanf("%f", &a);
	
	if (a < 160 && a >= 150)
		printf("S");
	else if (a >= 160 && a < 170)
		printf("M");
	else if (a >= 170 && a < 180)
		printf("L");
	else if (a >= 180)
		printf("XL");
	else
		printf("맞는 교복이 없습니다.");
}
