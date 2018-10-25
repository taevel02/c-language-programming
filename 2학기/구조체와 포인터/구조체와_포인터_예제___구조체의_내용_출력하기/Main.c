#include <stdio.h>

typedef struct Person {
	int age;
	int height;
	char name[50];
} Person;

void print_Person(Person p) {
	printf("이름 : %s\n나이 : %d\n키 : %d", p.name, p.age, p.height);
}

int main() {
	Person a;
	scanf("%s %d %d", a.name, &a.age, &a.height);
	print_Person(a);
	return 0;
}
