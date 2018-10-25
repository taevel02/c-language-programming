#include <stdio.h>

typedef struct Hero {
	char weapon[20];
	char job[20];
	int health;
} Hero;

void Run(Hero *p) {
	(*p).health -= 10;
}

int main() {
	Hero a;
	int *count;
	scanf("%s %s %d", a.job, a.weapon, &a.health);
	scanf("%d", &count);
	for (int i = 0; i < count; i++)
		Run(&a);
	printf("%d", a.health);
	return 0;
}
