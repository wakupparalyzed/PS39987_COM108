#include<stdio.h>

//Xây dựng hàm checkYear
int checkNam(int nam) {
	int check = 0;
	if((nam % 400 == 0 || nam % 4 == 0) && (nam % 100 != 0)) {
		check = 1;
	}
	return check;
}

int main() {
	int year;
	printf("Nhap vao nam: ");
	scanf("%d", &year);
	if(checkNam(year) == 1) {
		printf("%d la nam nhuan", year);
	} else {
		printf("%d khong phai la nam nhuan", year);
	}
	
	return 0;
}
