#include <ctype.h>
#include <stdio.h>
#include <string.h>

void nhap(char s[][20]) {
  int i;
  for (i = 0; i < 5; i++) {
    printf("Nhap chuoi %d: ", i + 1);
    gets(s[i]);
  }
}

void xuat(char s[][20]) {
  int i;
  for (i = 0; i < 5; i++) {
    printf("\n%s", s[i]);
  }
}

void sort(char s[][20]) {
  int i, j;
  for(i = 0; i < 4; i++) {
    for(j = i + 1; j < 5; j++) {
      if(strcmp(s[i], s[j]) > 0) {
        char temp[20];
        strcpy(temp, s[i]);
        strcpy(s[i], s[j]);
        strcpy(s[j], temp);
      }
    }
  }
}

int main() {
  char s[5][20];
  nhap(s);
  xuat(s);
  printf("\n\nChuoi sau khi sap xep: \n");
  sort(s);
  xuat(s);
  return 0;
}
