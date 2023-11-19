#include<stdio.h> 

int main() {
	
	//khai bao bien
	int x;

	// input
	printf("Hay nhap so tu ban phim: ");	
	scanf("%d",&x);

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
	printf("khong phai so chinh phuong");
	} else {
	printf("day la so chinh phuong");
	}
	return 0; 
} 
