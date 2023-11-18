#include<stdio.h>
int main() {
	int min, max;
	int tong = 0;
	int bienDem = 0;
  
	printf("Nhap so tu nhien min: ");
	scanf("%d", &min);
	printf("Nhap so tu nhien max: ");
	scanf("%d", &max);
  
	int i = min;
  
	while(i <= max) {
		if(i % 2==0) {
			tong +=i;
			printf("%d\n", tong);
			bienDem++;
		} i++;
	}
	int tbc = tong / bienDem;
	printf("Trung binh tong cac so tu nhien chia het cho 2 tu min den max: %d", tbc);
	return 0;
}
