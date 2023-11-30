#include <stdio.h>

int main() {
  // Yeu cau nguoi dung nhap so hang va so cot cho ma tran
  int n, m;
  printf("Nhap so hang n: ");
  scanf("%d", &n);
  printf("Nhap so cot m: ");
  scanf("%d", &m);

  // Khai bao ma tran voi kich thuoc n x m
  int mang[n][m];

  // Nhap du lieu cho ma tran tu ban phim
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("Nhap phan tu [%d][%d]: ", i, j);
      scanf("%d", &mang[i][j]);
    }
  }

  // Xuat ma tran binh phuong cua cac phan tu trong ma tran
  printf("Ma tran binh phuong la:\n");
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      printf("%d ", mang[i][j] * mang[i][j]);
    }
    printf("\n");
  }

  return 0;
}
