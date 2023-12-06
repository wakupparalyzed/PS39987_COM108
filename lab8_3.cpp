#include <stdio.h>
#include <string.h>

struct sinhVien {
  char mssv[10];
  char tenSV[20];
  char nganhHoc[30];
  float diemTB;
};

int main() {
  int i, j, n;
  printf("Nhap so luong sinh vien: ");
  scanf("%d", &n);
  struct sinhVien nhomSV[n];

  for (i = 0; i < n; i++) {
    printf("\n");
    printf("Nhap ma sinh vien: ");
    scanf("%s", nhomSV[i].mssv);
    printf("Nhap ten sinh vien: ");
    scanf("%s", nhomSV[i].tenSV);
    printf("Nhap nganh hoc: ");
    scanf("%s", nhomSV[i].nganhHoc);
    printf("Nhap diem trung binh: ");
    scanf("%f", &nhomSV[i].diemTB);
  }

  // search

  char mssv[10];
  printf("\nNhap ma sinh vien can tim: ");
  scanf("%s", mssv);
  for (i = 0; i < n; i++) {
    if (strcmp(nhomSV[i].mssv, mssv) == 0) {
      printf("\nMa so sinh vien: %s", nhomSV[i].mssv);
      printf("\nTen sinh vien: %s", nhomSV[i].tenSV);
      printf("\nNganh hoc: %s", nhomSV[i].nganhHoc);
      printf("\nDiem trung binh: %.2f", nhomSV[i].diemTB);
      return 0;
    }
  }
}
