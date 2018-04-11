#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
	int i = 0;
	
	srand(time(NULL));
	int ca = rand() % 9, cb = rand() % 9, cc = rand() % 9;

	while (i < 1) {
		int a, b, c, sum = 0, ssum = 0;
		printf("숫자 세 개를 입력해주세요.\n");
		scanf_s("%d %d %d", &a, &b, &c);

		if (a == ca) sum++;
		if (b == cb) sum++;
		if (c == cc) sum++;

		if (a == cb || a == cc) ssum++;
		if (b == ca || b == cc) ssum++;
		if (c == ca || c == cb) ssum++;

		if (sum == 3) i++;
		else printf("%dStrike %dBall\n", sum, ssum);
	}

	printf("숫자 게임 성공!\n");
}
