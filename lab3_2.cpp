#include<stdio.h>
#include<math.h>
int main() {
	// khai bao bien
	float a,b,c;
	// input
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	printf("Nhap c: ");
	scanf("%f", &c);
	// xu ly tinh toan (re nhanh)
	// ax2 + bx + c = 0
	if(a==0) {
		// phuong trinh b1: bx + c = 0
		if(b==0) {
			if(c==0) {
				printf("Phuong trinh b1 bai 3 co vo so nghiem");
			}
			else {
				printf("Phuong trinh b1 bai 3 vo nghiem");
			}

		}
		else {
			float x = -c/b;
			printf("Phuong trinh b1 bai 3 co nghiem la: %.1f\n", x);
		}
	}
		else {
			// giai phuong trinh b2
			float delta = b*b - 4*a*c;
			if(delta < 0) {
				printf("Phuong trinh vo nghiem");
			}
			else if(delta == 0) {
				// Co nghiem kep
				float y = -b/2*a;
				printf("Phuong trinh co nghiem kep la: %.1f", y);
			}
			else {
				// Phuong trinh co 2 nghiem
				float x1 = (-b + sqrt(delta))/2*a;
				float x2 = (-b -sqrt(delta))/2*a;
				printf("Phuong trinh co 2 nghiem phan biet\n");
				printf("Phuong trinh b2 x1 la: %.1f\n");
				printf("Phuong trinh b2 x2 la: %.1f");
			}
		}
		return 0;
	}
