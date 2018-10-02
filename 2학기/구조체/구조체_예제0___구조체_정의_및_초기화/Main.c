#include <stdio.h>
struct student {
	int num;
	char name[10];
	char department[100];
};

int main() {
	struct student s1 = {1111, "kim", "e-business"};
	printf("%d %s %s", s1.num, s1.name, s1.department);
	return 0;
}
