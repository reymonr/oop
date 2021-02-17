/**
  # Selection / Percabangan
    - If Else
    - Switch Case

  # Looping / Perulangan
    - For
    - While
    - Do While
**/

#include <iostream>

using namespace std;

int main()
{
  int x = 10;

  if(x > 10) {
    cout << "Puluhan" << endl;
  } else {
    cout << "Satuan" << endl;
  }

  int angka;
  cout << "Masukkan sebuah huruf: ";
  cin >> angka;

  switch(angka) {
    case 1 :  cout << "Hari ke " << angka << " adalah hari Minggu";
              break;
    case 2 :  cout << "Hari ke " << angka << " adalah hari Senin";
              break;
    case 3 :  cout << "Hari ke " << angka << " adalah hari Selasa";
              break;
    case 4 :  cout << "Hari ke " << angka << " adalah hari Rabu";
              break;
    case 5 :  cout << "Hari ke " << angka << " adalah hari Kamis";
              break;
    case 6 :  cout << "Hari ke " << angka << " adalah hari Jumat";
              break;
    case 7 :  cout << "Hari ke " << angka << " adalah hari Sabtu";
              break;
    default :  cout << "Angka yang dimasukkan diluar dari pilihan yang tersedia.";
              break;
  }

  int y=0;
  while(y < 10) {
    cout << y << endl;
    y++;
  }

  do {
    cout << y << endl;
    y++;
  } while(y < 10);

  for(y=0; y<10; y++) {
    cout << y << endl;
  }

  return 0;
}
