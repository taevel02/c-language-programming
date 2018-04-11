#include <stdio.h>
void main() {
	int a;
	scanf("%d", &a);
	
	if (a <= 120)
		printf("원 안에 들어왔습니다.");
	else
		printf("원을 벗어났습니다.");
}
