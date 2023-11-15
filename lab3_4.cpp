#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
int main() {
	// khai bao bien
	float soDien;
	float bac1 = 1678;
	float bac2 = 1734;
	float bac3 = 2014;
	float bac4 = 2536;
	float bac5 = 2834;
	float bac6 = 2927;
	//input
	printf("Nhap so dien: ");
	scanf("%f", &soDien);
	// xu ly tinh toan
	float tong = 0;
	if (soDien <= 50) {
		tong = (soDien*bac1);
	}
	else if(soDien <= 100) {
		tong = (50*bac1) + ((soDien-50)*bac2);
	}
	else if(soDien <= 200) {
		tong = (50*bac1) + (50*bac2) + ((soDien - 100)*bac3);
	}
	else if(soDien <= 300) {
		tong = (50*bac1) + (50*bac2) + (100*bac3) + ((soDien - 200)*bac4);
	}
	else if(soDien <= 400) {
		tong = (50*bac1) + (50*bac2) + (100*bac3) + (100*bac4) + ((soDien - 300)*bac5);
	}
	else {
		tong = (50*bac1) + (50*bac2) + (100*bac3) + (100*bac4) + (100*bac5) + ((soDien - 400)*bac6);
	}
	printf("Tong so dien tieu thu la: %.0f", tong);
	return 0;
}
