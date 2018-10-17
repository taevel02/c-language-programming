#include <stdio.h>
struct Score {
	char name[50];
	int num;
};

int main() {
	int data;
	scanf("%d", &data);
	struct Score s1[data];
	
	for (int i = 0; i < data; i++)
		scanf("%s %d", s1[i].name, &s1[i].num);
	
	int temp = 0;
	for (int i = 1; i < data; i++) {
		if (s1[temp].num < s1[i].num)
			temp = i;
	}
	
	printf("%s", s1[temp].name);
	
	return 0;
}
