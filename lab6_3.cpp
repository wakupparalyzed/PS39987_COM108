#include <stdio.h>

// Xu ly du lieu
void sapXep(int mang[], int n) {
  int i, j, temp;
  for (i = 0; i < n - 1; i++) {
    for (j = i + 1; j < n; j++) {
      if (mang[i] > mang[j]) {
        temp = mang[i];
        mang[i] = mang[j];
        mang[j] = temp;
      }
    }
  }
}

int main() {
  int n;
  printf("Nhap so phan tu mang: ");
  scanf("%d", &n);
  int mang[n];

  int i;
  for (i = 0; i < n; i++) {
    printf("Nhap gia tri phan tu mang[%d]: ", i);
    scanf("%d", &mang[i]);
  }

  // Sap xep mang
  sapXep(mang, n);

  printf("Cac gia tri phan tu mang sau khi sap xep tang dan: \n");
  for (i = 0; i < n; i++) {
    printf("mang[%d] = %d\n", i, mang[i]);
  }

  printf("Cac gia tri phan tu mang sau khi sap xep giam dan: \n");
  for (i = n - 1; i >= 0; i--) {
    printf("mang[%d] = %d\n", i, mang[i]);
  }

  return 0;
}
