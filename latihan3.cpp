#include <iostream>
using namespace std;

int main() {
  int pilihan;
  float sisi, panjang, lebar, alas, tinggi;

  cout << "Pilih bentuk geometri yang ingin dihitung luasnya:" << endl;
  cout << "1. Persegi" << endl;
  cout << "2. Persegi Panjang" << endl;
  cout << "3. Segitiga" << endl;
  cout << "Masukkan pilihan Anda: ";
  cin >> pilihan;

  switch (pilihan) {
    case 1: // Persegi
      cout << "Masukkan sisi persegi: ";
      cin >> sisi;
      cout << "Luas persegi adalah: " << sisi * sisi << endl;
      break;

    case 2: // Persegi Panjang
      cout << "Masukkan panjang persegi panjang: ";
      cin >> panjang;
      cout << "Masukkan lebar persegi panjang: ";
      cin >> lebar;
      cout << "Luas persegi panjang adalah: " << panjang * lebar << endl;
      break;

    case 3: // Segitiga
      cout << "Masukkan alas segitiga: ";
      cin >> alas;
      cout << "Masukkan tinggi segitiga: ";
      cin >> tinggi;
      cout << "Luas segitiga adalah: " << 0.5 * alas * tinggi << endl;
      break;

    default:
      cout << "Pilihan tidak valid!" << endl;
      break;
  }

  return 0;
}