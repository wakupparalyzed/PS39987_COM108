#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

void soNguyenTo() {
  // Khai bao bien
  int x;

  // input
  printf("Hay nhap so tu ban phim: ");
  scanf("%d", &x);
  printf("\n");

  // xu ly tinh toan - nhap 7
  int dem = 0; // day la so nguyen to
  for (int i = 2; i < x; i++) {
    if (x % i == 0) {
      dem++; // day la so nguyen to
    }
  }

  // output
  if (dem == 0) {
    printf("Day la so nguyen to\n\n");
  } else {
    printf("Day khong phai la so nguyen to\n\n");
  }
}

// Ham tinh uoc so chung (GCD)
int findGCD(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Ham tinh boi so chung (LCM)
int findLCM(int a, int b) {
  // LCM = (a * b) / GCD(a, b)
  return (a * b) / findGCD(a, b);
}

void uocBoi() {
  int num1, num2;

  // Nhap hai so nguyen
  printf("Nhap so thu nhat: ");
  scanf("%d", &num1);
  printf("\n");

  printf("Nhap so thu hai: ");
  scanf("%d", &num2);
  printf("\n");

  // Tim va in ra uoc boi
  printf("Uoc so chung cua %d va %d la: %d\n", num1, num2, findGCD(num1, num2));
  printf("\n");
  printf("Boi so chung cua %d va %d la: %d\n", num1, num2, findLCM(num1, num2));
  printf("\n");
}

void tinhTienKaraoke() {
  int gio_bat_dau, gio_ket_thuc;

  // Nhao gio bat dau va gio ket thuc
  printf("Nhap gio bat dau: ");
  scanf("%d", &gio_bat_dau);

  printf("Nhap gio ket thuc: ");
  scanf("%d", &gio_ket_thuc);

  // Kiem tra gio lam viec cua quan
  if (gio_bat_dau < 12 || gio_bat_dau > 23 || gio_ket_thuc < 12 ||
      gio_ket_thuc > 23) {
    printf("Gio khong hop le. Quan Karaoke hoat dong tu 12h den 23h.\n");
    return; // Ket thuc chuong trinh voi ma loi
  }

  // Tinh so gio su dung
  int so_gio_su_dung = gio_ket_thuc - gio_bat_dau;

  // Gia tien 3 gio dau
  int gia_tien = 150000;

  // Ap dung giam gia cho gio thu 4 tro di
  if (so_gio_su_dung > 3) {
    gia_tien += 0.7 * gia_tien * (so_gio_su_dung - 3);
  }

  // Ap dung giam gia cho gio bat dau tu 14 - 17
  if (gio_bat_dau >= 14 && gio_bat_dau <= 17) {
    gia_tien *= 0.9;
  }

  // Hien thi gia tien can thanh toan
  printf("Gia tien can thanh toan: %d\n", gia_tien);
}

void tinhTienDien() {
  // khai bao bien
  float soDien;
  float bac1 = 1678;
  float bac2 = 1734;
  float bac3 = 2014;
  float bac4 = 2536;
  float bac5 = 2834;
  float bac6 = 2927;
  // input
  printf("Nhap so dien: ");
  scanf("%f", &soDien);
  printf("\n");
  // xu ly tinh toan
  float tong = 0;
  if (soDien <= 50) {
    tong = (soDien * bac1);
  } else if (soDien <= 100) {
    tong = (50 * bac1) + ((soDien - 50) * bac2);
  } else if (soDien <= 200) {
    tong = (50 * bac1) + (50 * bac2) + ((soDien - 100) * bac3);
  } else if (soDien <= 300) {
    tong = (50 * bac1) + (50 * bac2) + (100 * bac3) + ((soDien - 200) * bac4);
  } else if (soDien <= 400) {
    tong = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) +
           ((soDien - 300) * bac5);
  } else {
    tong = (50 * bac1) + (50 * bac2) + (100 * bac3) + (100 * bac4) +
           (100 * bac5) + ((soDien - 400) * bac6);
  }
  printf("Tong so dien tieu thu la: %.0f\n\n", tong);
}

// Ham doi tien
void doiTien() {
  int m;
  printf("Nhap vao so tien can doi: ");
  scanf("%d", &m);
  printf("\n");
  int m1 = m / 500;
  int m2 = (m % 500) / 200;
  int m3 = ((m % 500) % 200) / 100;
  int m4 = (((m % 500) % 200) % 100) / 50;
  int m5 = ((((m % 500) % 200) % 100) % 50) / 20;
  int m6 = (((((m % 500) % 200) % 100) % 50) % 20) / 10;
  int m7 = ((((((m % 500) % 200) % 100) % 50) % 20) % 10);
  int m8 = (((((((m % 500) % 200) % 100) % 50) % 20) % 10) / 5);
  int m9 = ((((((((m % 500) % 200) % 100) % 50) % 20) % 10) % 5) / 2);
  printf("Co %d to 500K\n", m1);
  printf("Co %d to 200K\n", m2);
  printf("Co %d to 100K\n", m3);
  printf("Co %d to 50K\n", m4);
  printf("Co %d to 20K\n", m5);
  printf("Co %d to 10K\n", m6);
  printf("Co %d to 5K\n", m7);
  printf("Co %d to 2K\n", m8);
  printf("Co %d to 1K\n", m9);
}

void vayLaiSuat() {
  printf("Bang lai suat vay ngan hang\n\n");
  int tienLai;
  int tienTra;
  int tienCon;
  int tienVay;
  printf("Nhap vao so tien can vay: ");
  scanf("%d", &tienVay);
  printf("\n");
  int tienGoc = tienVay / 12;
  tienCon = tienVay;
  printf("Ky han | Lai phai tra | Goc phai tra | So tien phai tra | So tien "
         "con lai \n");
  for (int i = 1; i <= 12; i++) {
    tienLai = tienCon * 0.05;
    tienTra = tienGoc + tienLai;
    tienCon = tienCon - tienGoc;
    printf("-------------------------------------------------------------------"
           "------\n");
    printf("%2d | ", i);
    printf("%12d | ", tienLai);
    printf("%12d | ", tienGoc);
    printf("%16d | ", tienTra);
    printf("%15d | ", tienCon);
    printf("\n");
  }
}

void vayTienMuaXe() {
  const double soTienVay = 500000000; // 500 trieu (VND)
  const int thoiHanVayNam = 24;
  const double laiSuatNam = 0.072; // 7.2%

  double tyLeVay;
  double soTienTraLanDau, soTienTraHangThang;

  // Nhap ty le vay
  printf("Nhap ty le vay: ");
  scanf("%lf", &tyLeVay);

  // Chuyen ty le vay
  tyLeVay /= 100;

  // Tinh toan so tien tra lan dau
  soTienTraLanDau = soTienVay * (1 - tyLeVay);

  // Tinh toan so tien tra hang thang
  double laiSuatThang = laiSuatNam / 12;
  int soKy = thoiHanVayNam * 12; // So ky tra gop

  soTienTraHangThang =
      soTienVay * (laiSuatThang / (1 - pow(1 + laiSuatThang, -soKy)));

  // Hien thi ket qua
  printf("So tien phai tra lan dau: %.2f VND\n", soTienTraLanDau);
  printf("So tien phai tra hang thang: %.2f VND\n", soTienTraHangThang);
}

// Ham tinh tai xiu
int roll_dice() { return rand() % 6 + 1; }

void taiXiu() {
  printf("Chao mung den voi tro choi Tai Xiu!\n\n");
  while (1) {
    printf("Nhap cuoc cua ban (tai/xiu): ");
    char user_bet[10];
    scanf("%s", user_bet);
    printf("\n");

    int dice_1 = roll_dice();
    int dice_2 = roll_dice();
    int dice_3 = roll_dice();

    int total = dice_1 + dice_2 + dice_3;

    printf("Xuc xac 1: %d\nXuc xac 2: %d\nXuc xac 3: %d\n", dice_1, dice_2,
           dice_3);
    printf("\n");
    printf("Tong: %d\n", total);
    printf("\n");

    if ((total >= 11 && strcmp(user_bet, "tai") == 0) ||
        (total <= 10 && strcmp(user_bet, "xiu") == 0)) {
      printf("Chuc mung! Ban thang!\n\n");
    } else {
      printf("Xin loi, ban thua!\n\n");
    }

    printf("Ban co muon choi tiep khong? (co/khong): ");
    char play_again[5];
    scanf("%s", play_again);
    if (strcmp(play_again, "khong") == 0) {
      printf("Cam on ban da choi! Tam biet!\n\n");
      break;
    }
  }
}

struct sinhVien {
  char mssv[10];
  char tenSV[20];
  char nganhHoc[30];
  float diemTB;
};

void inXepLoaiHocLuc(struct sinhVien sv) {
  if (sv.diemTB >= 9.0) {
    printf("Hoc luc xuat sac\n");
  } else if (sv.diemTB >= 8.0) {
    printf("Hoc luc gioi\n");
  } else if (sv.diemTB >= 6.5) {
    printf("Hoc luc kha\n");
  } else if (sv.diemTB >= 5.0) {
    printf("Hoc luc trung binh\n");
  } else {
    printf("Hoc luc yeu\n");
  }
}

void sapXepThongTinSV() {
  int i, j, n;
  printf("Nhap so luong sinh vien: ");
  scanf("%d", &n);
  getchar();

  struct sinhVien nhomSV[n];

  for (i = 0; i < n; i++) {
    printf("\n");
    printf("Nhap ma sinh vien: ");
    fflush(stdin);
    gets(nhomSV[i].mssv);
    printf("Nhap ten sinh vien: ");
    fflush(stdin);
    gets(nhomSV[i].tenSV);
    printf("Nhap nganh hoc: ");
    fflush(stdin);
    gets(nhomSV[i].nganhHoc);
    printf("Nhap diem trung binh: ");
    scanf("%f", &nhomSV[i].diemTB);
    getchar();
  }

  // sort
  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (nhomSV[i].diemTB > nhomSV[j].diemTB) {
        struct sinhVien temp = nhomSV[i];
        nhomSV[i] = nhomSV[j];
        nhomSV[j] = temp;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("\n");
    printf("Ma sinh vien: %s\n", nhomSV[i].mssv);
    printf("Ten sinh vien: %s\n", nhomSV[i].tenSV);
    printf("Nganh hoc: %s\n", nhomSV[i].nganhHoc);
    printf("Diem trung binh: %.2f\n", nhomSV[i].diemTB);
    inXepLoaiHocLuc(nhomSV[i]);
  }
}

int main() {
  printf("1. Kiem tra so nguyen\n\n");
  printf("2. Tim uoc so chung va boi so chung cua hai so\n\n");
  printf("3. Chuong trinh tinh tien cho quan Karaoke\n\n");
  printf("4. Tinh tien dien\n\n");
  printf("5. Chuc nang doi tien\n\n");
  printf("6. Xay dung chuc nang tinh vay lai suat ngan hang vay tra gop\n\n");
  printf("7. Xay dung chuong trinh vay tien mua xe\n\n");
  printf("8. Sap xep thong tin sinh vien\n\n");
  printf("9. Xay dung game FPOLY-LOTT (2/15)\n\n");
  printf("10. Xay dung chuong trinh tinh toan phan so\n\n");

  int choose;
  do {
    printf("Chon di: ");
    scanf("%d", &choose);
    printf("\n");
    switch (choose) {
    case 1:
      soNguyenTo();
      break;
    case 2:
      uocBoi();
      break;
    case 3:
      tinhTienKaraoke();
      break;
    case 4:
      tinhTienDien();
      break;
    case 5:
      doiTien();
      break;
    case 6:
      vayLaiSuat();
      break;
    case 7:
      vayTienMuaXe();
      break;
    case 8:
      sapXepThongTinSV();
      break;
    case 9:
      srand(time(NULL));
      taiXiu();
      break;
    case 10:
      printf("10. Chuong trinh dang bao tri !\n\n");
      break;
    default:
      printf("Lua chon khong hop le. Vui long nhap lai.\n\n");
    }
  } while (choose != 0);
  return 0;
}
