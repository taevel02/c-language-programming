#include <stdio.h>
struct Human {
	char name[100];
	char num[50];
	char gender;
};

int main() {
	int datanum;
	scanf("%d", &datanum);
	struct Human s1[datanum];
	
	for (int i = 0; i < datanum; i++) {
		scanf("%s %s", s1[i].name, s1[i].num);
		if (s1[i].num[7] == '1' || s1[i].num[7] == '3')
			s1[i].gender = 'm';
		else
			s1[i].gender = 'f';
	}
	
	for (int i = 0; i < datanum; i++)
		printf("%s %c\n", s1[i].name, s1[i].gender);
	
	return 0;
}
