#include<stdio.h>

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
	printf("Chon di: ");
	scanf("%d", &choose);
	printf("\n");
	switch(choose) {
		case 1:
			printf("1. Kiem tra so nguyen\n\n");
			break;
		case 2:
			printf("2. Tim uoc so chung va boi so chung cua hai so\n\n");
			break;
		case 3:
			printf("3. Chuong trinh tinh tien cho quan Karaoke\n\n");
			break;
		case 4:
			printf("4. Tinh tien dien\n\n");
			break;
		case 5:
			printf("5. Chuc nang doi tien\n\n");
			break;
		case 6:
			printf("6. Xay dung chuc nang tinh vay lai suat ngan hang vay tra gop\n\n");
			break;
		case 7:
			printf("7. Xay dung chuong trinh vay tien mua xe\n\n");
			break;
		case 8:
			printf("8. Sap xep thong tin sinh vien\n\n");
			break;
		case 9:
			printf("9. Xay dung game FPOLY-LOTT (2/15)\n\n");
			break;
		case 10:
			printf("10. Xay dung chuong trinh tinh toan phan so\n\n");
			break;
	}
	return 0;
}