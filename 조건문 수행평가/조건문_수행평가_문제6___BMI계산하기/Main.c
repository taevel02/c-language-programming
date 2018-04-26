#include <stdio.h>
int main() {
	float a, b;
	double bmi;
	scanf("%f %f", &a, &b);
	
	bmi = b/((a*0.01)*(a*0.01));
	
	if (bmi <= 18.5)
		printf("저체중");
	else if (bmi > 18.5 && bmi < 25)
		printf("정상");
	else if (bmi >= 25 && bmi < 30)
		printf("과체중");
	else if (bmi >= 30)
		printf("비만");
}
