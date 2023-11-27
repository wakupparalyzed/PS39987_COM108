#include<stdio.h>

int main() {
	// Khai bao bien
	int x;
	
	// input
	printf("Hay nhap so tu ban phim: ");
	scanf("%d", &x);
	
	// xu ly tinh toan - nhap 7
	int dem=0; // day la so nguyen to
	for(int i=2; i<x; i++) {
		if(x%i==0) {
			dem++; // day la so nguyen to
		}
	}
	
	// output
	if(dem==0) {
		printf("Day la so nguyen to");
	} else {
		printf("Day khong phai la so nguyen to");
	}
	return 0;
}
