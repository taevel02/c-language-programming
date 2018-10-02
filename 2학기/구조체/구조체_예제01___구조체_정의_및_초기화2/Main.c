#include <stdio.h>
struct food {
	char name[100];
	int calorie;
	char type[100];
};

int main() {
	struct food f1 = {"", 0, ""};
	scanf("%s", &f1.name);
	scanf("%d", &f1.calorie);
	scanf("%s", &f1.type);
	printf("음식이름 : %s\n음식칼로리 : %dCal\n음식종류 : %s\n", f1.name, f1.calorie, f1.type);
}
