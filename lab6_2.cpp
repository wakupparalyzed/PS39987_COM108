#include<stdio.h>
int main() {

  int n;
  printf("Hay nhap so phan tu mang: ");
  scanf("%d", &n);
  int mang[n];

  for (int i = 0; i < n; i++) {
    printf("Nhap gia tri phan tu mang[%d]: ", i);
    scanf("%d", &mang[i]);
  }

  int min = mang[0];
  int max = mang[0];
  for (int i = 0; i < n; i++) {
    if (mang[i] < min) {
      min = mang[i];
    }
  }
  for (int i = 0; i < n; i++) {
    if (mang[i] > max) {
      max = mang[i];
    }
  }
  printf("Gia tri nho nhat trong mang la: %d\n", min);
  printf("Gia tri lon nhat trong mang la: %d\n", max);
  return 0;
}
