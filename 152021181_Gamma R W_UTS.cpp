//NAMA        : GAMMA RIZQUHA WIRADISASTRA
//NRP         : 152021181
//KELAS       : E
//MATA KULIAH : IFB-207 PEMROGAMAN DASAR

#include <iostream>

using namespace std;

int pilih;

void bandingPermen() {
  int i, banyak;
  string nama[3];
  int permen[3];
  int selisih[3];

  banyak = 0;

  for (i=0; i<3; i++) {
    cout << "Masukkan nama " << i+1 << ": ";
    getline(cin, nama[i]);
    cout << "Masukkan banyak permen: ";
    cin >> permen[i];
    if (permen[i] >= banyak) {
      banyak = permen[i];
    }
    cin.ignore();
  }
  cout << endl << "Anak dengan permen terbanyak adalah:" << endl;
  for (i=0; i<3; i++) {
    if (permen[i] == banyak) {
      cout << nama[i] << endl;
    }
    else {
      selisih[i] = banyak-permen[i];
    }
  }
  for (i=0; i<3; i++) {
    if (selisih[i] != 0){
      cout << "Selisih dengan " << nama[i] << " adalah " << selisih[i] << endl;
    }
  }
}

void pinATM() {
  int pin, kunci, salah;
  bool buka = false;
  
  kunci = 24985;
  salah = 0;

  cout << "SELAMAT DATANG DI ATM HAHAHIHI" << endl;
  while (!buka) {
    cout << endl << "Masukkan PIN Anda: ";
    cin >> pin;
    if (salah >= 3) {
      cout << "KARTU ANDA TELAH DIBLOKIR, SILAHKAN HUBUNGI BANK TERDEKAT" << endl;
    }
    else {
      if (pin != kunci) {
        cout << "PIN YANG ANDA MASUKKAN SALAH" << endl;
        salah++;
      }
      else {
        buka = true;
      }
    }
  }
  cout << endl << "SELAMAT DATANG" << endl;
}

void warungBuSaleh() {
  int i, byk, jam;
  float harga[10];
  float sub, total, disk;

  sub = 0;

  cout << "Masukkan jam belanja: ";
  cin >> jam;
  cout << endl;
  cout << "Masukkan banyak belanjaan: ";
  cin >> byk;
  
  for (i=0; i<byk; i++) {
    cout << "Masukkan harga barang " << i+1 << ": ";
    cin >> harga[i];
    sub = sub+harga[i];
  }
  if (jam >= 1300 && jam <= 1359) {
    cout << endl << "Subtotal : " << sub << endl;
    disk = 0.2 * sub;
    total = sub - disk;
    cout << "Diskon   : " << disk << endl;
  }
  else {
    total = sub;
  }
  cout << "Total    : " << total;
}

int main() {
  cout << "DAFTAR PROGRAM" << endl;
  cout << "1. Banding Permen" << endl;
  cout << "2. PIN ATM" << endl;
  cout << "3. Warung Bu Saleh" << endl;
  cout << endl << "Pilih Program: ";
  cin >> pilih;
  cout << endl;
  cin.ignore();
  if (pilih == 1) {
    bandingPermen();
  }
  else if (pilih == 2) {
    pinATM();
  }
  else if (pilih == 3) {
    warungBuSaleh();
  }
  else {
    cout << "Pilihan tidak valid" << endl;
  }
}
