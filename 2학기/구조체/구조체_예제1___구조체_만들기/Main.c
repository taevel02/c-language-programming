#include <stdio.h>
struct Person {
	char name[100];
	int age;
	char callnum[20];
};

int main() {
	int datanum;
	scanf("%d", &datanum);
	struct Person s1[datanum];
	
	for (int i = 0; i < datanum; i++)
		scanf("%s %d %s", s1[i].name, &s1[i].age, s1[i].callnum);
	
	for (int i = 0; i < datanum; i++) {
		if (s1[i].age >= 20)
			printf("%s %d %s\n", s1[i].name, s1[i].age, s1[i].callnum);
	}
	
	return 0;
}
