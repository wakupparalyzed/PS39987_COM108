#include<stdio.h>

int main() {
  int i, n;
  float tong, trungBinh;
  int dem = 0;
  
  printf("Nhap so phan tu mang: ");
  scanf("%d", &n);
  printf("\n");
  
  int mang[n];
  for(i = 0; i < n; i++) {
    printf("Nhap phan tu thu %d: ", i+1);
    scanf("%d", &mang[i]);
  }
  printf("\n");

  for(i = 0; i < n; i++) {
    printf("Phan tu [%d] la %d\n", i+1, mang[i]);
  }
  printf("\n");

  for(i = 0; i < n; i++) {
    if(mang[i] % 3 == 0) {
      tong += mang[i];
      dem++;
    }
  }
  trungBinh = tong / dem;
  printf("Trung binh cong cua cac so chia het cho 3 la %.2f", trungBinh);
  return 0;
}
