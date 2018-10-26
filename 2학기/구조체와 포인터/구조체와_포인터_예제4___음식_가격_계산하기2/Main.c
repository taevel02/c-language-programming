#include <stdio.h>
#include <string.h>

typedef struct Menu {
	char name[20];
	int price;
} Menu;

typedef struct Order {
	char name[20];
	int count;
} Order;

int GetFoodPrice(Menu *m, char *fn) {
	for (int i = 0; i < 10; i++) {
		if (strcmp(m[i].name, fn) == 0)
			return m[i].price;
	}
	return 0;
}

int main() {
	Menu menu[10];
	Order order[10];
	int n, totalPrice = 0;
	
	for (int i = 0; i < 10; i++)
		scanf("%s %d", menu[i].name, &menu[i].price);
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s %d", order[i].name, &order[i].count);
		totalPrice += GetFoodPrice(menu, order[i].name)*order[i].count;
	}
	
	printf("%d원", totalPrice);
	return 0;
}
