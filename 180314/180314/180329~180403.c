#include <stdio.h>
void main_exit2() {
	int a;
	scanf_s("%d", &a);

	if (a % 4 == 0)
		printf("%d년은 윤년입니다.", a);
	else if (a % 4 == 0) {
		if (a % 100 == 0)
			printf("%d년은 윤년이 아닙니다.", a);
	}
	else if (a % 100 == 0) {
		if (a % 400 == 0)
		printf("%d년은 윤년입니다.", a);
	}
		
}
