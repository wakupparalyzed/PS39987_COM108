#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char user[20], pass[20];
  printf("Nhap username: ");
  gets(user);
  printf("Nhap password: ");
  gets(pass);

  char userSys[] = "admin";
  char passSys[] = "admin123";
  if (strcmp(user, userSys) == 0 && strcmp(pass, passSys) == 0) {
    printf("Dang nhap thanh cong");

  } else {
    printf("Dang nhap that bai");
  }
  return 0;
}
