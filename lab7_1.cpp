#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[20];
  printf("Nhap vao chuoi: ");
  gets(s);
  int i, na = 0, pa = 0;
  for (i = 0; i < strlen(s); i++) {
    char ch = tolower(s[i]);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
      na++;

    } else {
      pa++;
    }
  }
  printf("Chuoi %s co %d nguyen am va %d phu am", s, na, pa);
  return 0;
}
