#include <stdio.h>
int main() {
	float toan, ly, hoa;
	printf("Nhap diem toan: ");
	scanf("%f", &toan);
	printf("Nhap diem hoa: ");
	scanf("%f", &hoa);
	printf("Nhap diem ly: ");
	scanf("%f", &ly);
	printf("Diem trung binh: %.1f", (toan * 3 + ly * 2 + hoa) / 6);
	scanf("%s");
	return 0;
}
