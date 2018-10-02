#include <stdio.h>
struct student {
	char name[100];
	int class;
	int num;
};

int main() {
	int datanum;
	scanf("%d", &datanum);
	struct student s1[datanum];
	
	for (int i = 0; i < datanum; i++)
		scanf("%s %d %d", s1[i].name, &s1[i].class, &s1[i].num);
	
	for (int i = 0; i < datanum; i++)
		printf("%s %d %d\n", s1[i].name, s1[i].class, s1[i].num);
	
	return 0;
}
