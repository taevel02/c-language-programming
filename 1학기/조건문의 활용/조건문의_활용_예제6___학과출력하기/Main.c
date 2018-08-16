#include <stdio.h>
void main() {
	int num;
	scanf("%d", &num);

	switch (num % 1000 / 100) {

	case 1:
		printf("eb");
		break;

	case 2:
		printf("dc");
		break;

	case 3:
	case 4:
		printf("wp");
		break;

	case 5:
	case 6:
		printf("hd");
		break;

	default:
		printf("디미고 학생이 아닙니다.");
		break;

	}
}
