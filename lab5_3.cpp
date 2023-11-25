#include<stdio.h>
#include<conio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	
	swap(&a, &b);
	printf("%d\t\t%d", a, b);
	
	return 0;
}