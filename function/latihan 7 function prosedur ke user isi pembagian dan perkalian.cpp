#include <iostream>
using namespace std;

void kalkulator (int a, int b) ;

int main() {
    int num1, num2;

    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    kalkulator (num1, num2) ;

    return 0 ;
}

void kalkulator (int a, int b) {
  int penjumlahan = a + b ;
  cout<< "penjumlahan:" << penjumlahan << endl;

   int pengurangan = a - b ;
  cout<< "pengurangan:" << pengurangan << endl;

   int perkalian = a * b ;
  cout<< "perkalian:" << perkalian << endl;

   int pembagian= a / b ;
  cout<< "pembagian:"<< pembagian << endl;
}
