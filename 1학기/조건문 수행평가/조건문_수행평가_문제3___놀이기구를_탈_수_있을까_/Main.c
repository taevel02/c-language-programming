#include <stdio.h>
void main() {
	int a, b;
	scanf("%d %d", &a, &b);
	
	if (a >= 12 || b >= 130)
		printf("놀이기구에 탑승하세요.\n");
	else
		printf("놀이기구에 탑승할 수 없습니다.\n");
}
