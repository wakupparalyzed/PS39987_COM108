#include<stdio.h>

int main() {
	printf("bai 1: xay dung chuong trinh tinh hoc luc\n");
	printf("bai 2: xay dung truong trinh giai phuong trinh\n");
	printf("bai 3 :xay dung chuong trinh tinh tien dien\n");
	
	int luaChon;
	printf("Chon di: ");
	scanf("%d",&luaChon);
	switch(luaChon) {
		case 1:
			printf("bai 1 xau dung chuong trinh hoc luc");
			break;
		case 2:
			printf("bai 2: xay dung truong trinh giai phuong trinh");
			break;
		case 3:
			printf(" bai 3 :xay dung chuong trinh tinh tien dien");
			break;
		
	}
	return 0;
}
