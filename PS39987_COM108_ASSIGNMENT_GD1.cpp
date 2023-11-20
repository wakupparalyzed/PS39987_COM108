#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<time.h>

void soNguyenTo() {
	// Khai bao bien
	int x;
	
	// input
	printf("Hay nhap so tu ban phim: ");
	scanf("%d, &x");
	
	// xu ly tinh toan - nhap 7
	int dem = 0; // day la so nguyen to
	for(int i=2; i<x; i++) {
		if(x % i==0) {
			dem++; // day la so nguyen to
		}
	}
	
	// output
	if(dem==0) {
		printf("Day la so nguyen to");
	} else {
		printf("Day khong phai la so nguyen to");
	}
}

// Ham tinh uoc so chung (GCD)
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Ham tinh boi so chung (LCM)
int findLCM(int a, int b) {
    // LCM = (a * b) / GCD(a, b)
    return (a * b) / findGCD(a, b);
}

void uocBoi() {
	int num1, num2;

    // Nhap hai so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Nhap so thu hai: ");
    scanf("%d", &num2);

    // Tim va in ra uoc boi
    printf("Uoc so chung cua %d va %d la: %d\n", num1, num2, findGCD(num1, num2));
    printf("Boi so chung cua %d va %d la: %d\n", num1, num2, findLCM(num1, num2));
}

void tinhTienDien() {
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
}

// Ham tinh tai xiu
int roll_dice() {
return rand() % 6 + 1; 
}

void taiXiu() {
	printf("Chao mung den voi tro choi Tai Xiu!\n\n");
    while (1) {
        printf("Nhap cuoc cua ban (tai/xiu): ");
        char user_bet[10];
        scanf("%s", user_bet);

        
        int dice_1 = roll_dice();
        int dice_2 = roll_dice();
        int dice_3 = roll_dice();

        int total = dice_1 + dice_2 + dice_3;

        printf("Xuc xac 1: %d\nXuc xac 2: %d\nXuc xac 3: %d\n", dice_1, dice_2, dice_3);
        printf("Tong: %d\n", total);

      
        if ((total >= 11 && strcmp(user_bet, "tai") == 0) || (total <= 10 && strcmp(user_bet, "xiu") == 0)) {
            printf("Chuc mung! Ban thang!\n");
        } else {
            printf("Xin loi, ban thua!\n");
        }

      
        printf("Ban co muon choi tiep khong? (co/khong): ");
        char play_again[5];
        scanf("%s", play_again);
        if (strcmp(play_again, "khong") == 0) {
            printf("Cam on ban da choi! Tam biet!\n");
            break;
        }
    }
}

int main() {
	printf("1. Kiem tra so nguyen\n\n");
	printf("2. Tim uoc so chung va boi so chung cua hai so\n\n");
	printf("3. Chuong trinh tinh tien cho quan Karaoke\n\n");
	printf("4. Tinh tien dien\n\n");
	printf("5. Chuc nang doi tien\n\n");
	printf("6. Xay dung chuc nang tinh vay lai suat ngan hang vay tra gop\n\n");
	printf("7. Xay dung chuong trinh vay tien mua xe\n\n");
	printf("8. Sap xep thong tin sinh vien\n\n");
	printf("9. Xay dung game FPOLY-LOTT (2/15)\n\n");
	printf("10. Xay dung chuong trinh tinh toan phan so\n\n");
	
	int choose;
	do {
		printf("Chon di: ");
		scanf("%d", &choose);
		printf("\n");
		switch(choose) {
			case 1:
				soNguyenTo();
				break;
			case 2:
				uocBoi();
				break;
			case 3:
				printf("3. Chuong trinh dang bao tri !\n\n");
				break;
			case 4:
				tinhTienDien();
				break;
			case 5:
				printf("5. Chuong trinh dang bao tri !\n\n");
				break;
			case 6:
				printf("6. Chuong trinh dang bao tri !\n\n");
				break;
			case 7:
				printf("7. Chuong trinh dang bao tri !\n\n");
				break;
			case 8:
				printf("8. Chuong trinh dang bao tri !\n\n");
				break;
			case 9:
				srand(time(NULL));
				taiXiu();
				break;
			case 10:
				printf("10. Chuong trinh dang bao tri !\n\n");
				break;
		default:
			printf("Lua chon khong hop le. Vui long nhap lai.\n\n");
		}
	} while(choose>10);
	return 0;
}
