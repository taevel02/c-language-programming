#include <stdio.h>
#include <string.h>

typedef struct Food {
	char name[20];
	int price;
} Food;

int GetFoodPrice(Food *p, char foodName[20]) {
	if (strcmp((*p).name, foodName) == 0) return 0;
	return 1;
}

int main() {
	int check = 0;
	Food a[5];
	for (int i = 0; i < 5; i++)
		scanf("%s %d", a[i].name, &a[i].price);
	char foodName[20];
	scanf("%s", foodName);
	for (int i = 0; i < 5; i++) {
		int k = GetFoodPrice(&a[i], foodName);
		if (k == 0)
			printf("%d", a[i].price);
		else
			check++;
	}
	
	if (check == 5) printf("0");
}
