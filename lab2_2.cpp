#include<stdio.h>
int main() {
	int dai, rong;
	printf("Hay nhap chieu dai: ");
	scanf("%d",&dai);
	printf("Hay nhap chieu rong: ");
	scanf("%d",&rong);
	int dienTich, chuVi;
	dienTich = dai*rong;
	chuVi = (dai+rong)*2;
	printf("Dien tich hinh chu nhat la: %d\n",dienTich);
	printf("Chu vi hinh chu nhat la : %d",chuVi);
	scanf("%s");
	return 0;
}