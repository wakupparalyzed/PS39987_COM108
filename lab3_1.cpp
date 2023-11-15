#include<stdio.h>
int main() {
	// khai bao bien
	float diem;
	// input
	printf("Hay nhap diem sinh vien: ");
	scanf("%f", &diem);
	// xu ly tinh toan if else if
	if(diem >= 9) {
		printf("Xuat sac");
	}
	else if(diem >= 8) {
		printf("Gioi");
	}
	else if(diem >= 6.5) {
		printf("Kha");
	}
	else if(diem >= 5) {
		printf("Trung binh");
	}
	else if(diem >= 3.5) {
		printf("Yeu");
	}
	else {
		printf("Kem");
	}
	return 0;
}
