#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
	// khai bao bien
	float a,b;
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	// re nhanh
	if (a==0) {
		if (b==0) {
			printf("Phuong trinh co vo so nghiem");
		}
		else {
			printf("Phuong trinh vo nghiem");
		}
	}
	else {
		printf("Phuong trinh co nghiem la: %f", -b/a);
	}
	return 0;
}
