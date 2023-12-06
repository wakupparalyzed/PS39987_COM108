#include <stdio.h>
#include <string.h>

struct sinhVien {
  char mssv[10];
  char tenSV[20];
  char nganhHoc[30];
  float diemTB;
};

int main() {
  int i, n;
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

  for (i = 0; i < n; i++) {
    printf("\n");
    printf("Ma sinh vien: %s\n", nhomSV[i].mssv);
    printf("Ten sinh vien: %s\n", nhomSV[i].tenSV);
    printf("Nganh hoc: %s\n", nhomSV[i].nganhHoc);
    printf("Diem trung binh: %.2f\n", nhomSV[i].diemTB);
  }

  return 0;
}
