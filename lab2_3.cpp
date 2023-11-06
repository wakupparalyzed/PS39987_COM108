#include<stdio.h>
#define PI 3.14
int main() {
	float bk;
	printf("Hay nhap ban kinh hinh tron: ");
	scanf("%f", &bk);
	float cvHinhTron, dtHinhTron;
	dtHinhTron = bk*bk*PI;
	cvHinhTron = bk*2*PI;
	printf("Dien tich hinh tron la: %f\n", dtHinhTron);
	printf("Chu vi hinh tron la: %f", cvHinhTron);
	scanf("%s");
	return 0;
}