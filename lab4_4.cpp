#include<stdio.h>
#include<math.h>

void trungBinhCong() {
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
	printf("Trung binh tong cac so tu nhien chia het cho 2 tu min den max: %d\n\n", tbc);
}

void soNguyenTo() {
	// Khai bao bien
	int x;
	
	// input
	printf("Hay nhap so tu ban phim: ");
	scanf("%d, &x");
	
	// xu ly tinh toan - nhap 7
	int dem=0; // day la so nguyen to
	for(int i=2; i<x; i++) {
		if(x%i==0) {
			dem++; // day la so nguyen to
		}
	}
	
	// output
	if(dem==0) {
		printf("Day la so nguyen to\n\n");
	} else {
		printf("Day khong phai la so nguyen to\n\n");
	}
}

void soChinhPhuong() {
	//khai bao bien
	int x;

	// input
	printf("Hay nhap so tu ban phim: ");	
	scanf("%d", &x);

	//xu li tinh toan
	int dem =0;
	for (int i = 1 ;i<x;i++) {
    	if(i*i==x) {
    		dem++;
			break;
		}
	
	}

	//output
	if(dem==0) {
	printf("khong phai so chinh phuong\n\n");
	} else {
	printf("Day la so chinh phuong\n\n");
	}
}

int main() {
    int luaChon;
    do {
    	printf("* * * * * * * * * * * * * * * * * *\n");
        printf("* 1. Tinh trung binh cong         *\n");
        printf("* 2. Tim so nguyen to             *\n");
        printf("* 3. Tim song chinh phuong        *\n");
        printf("* 4. Thoat                        *\n");
        printf("* * * * * * * * * * * * * * * * * *\n\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        printf("\n");

        switch(luaChon) {
            case 1:
                trungBinhCong();
                break;
            case 2:
                soNguyenTo();
                break;
            case 3:
                soChinhPhuong();
                break;
            case 4:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long nhap lai.\n\n");
        }
    } while(luaChon != 4);

    return 0;
}
