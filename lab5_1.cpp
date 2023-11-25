#include<stdio.h>
#include<conio.h>

int max(int num1, int num2, int num3) {
	int m;
	m = num1;
	if(m < num2) {
		m = num2;
	}
	
	if(m < num3) {
		m = num3;
	}
	return m;
}

int main() {
	int so1, so2, so3;
	printf("NHap so thu nhat: ");
	scanf("%d", &so1);
	printf("NHap so thu hai: ");
	scanf("%d", &so2);
	printf("NHap so thu ba: ");
	scanf("%d", &so3);
	
	int m = max(so1, so2, so3);
	printf("So lon nhat trong ba so la: %d", m);
	
	return 0;
}
