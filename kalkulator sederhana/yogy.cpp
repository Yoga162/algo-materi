#include <iostream>

using namespace std;
int main() {
    // deklarasi variabel
    float num1, num2, sum;
    float bagi;
    float kali;
    float kurang;

    // menerima input dari pengguna
    cout << "masukan angka pertama: ";
    cin >> num1;
    cout << "masukan angka kedua: ";
    cin >> num2;

    // menjumlahkan kedua angka
    sum = num1 + num2;
    bagi = num1/num2;
    kali = num1 * num2;
    kurang = num1 - num2;

    // menghasilkan hasil
    cout<< "hasil penjumlahan: " <<sum;
    cout<< "hasil pembagian: " <<bagi;
    cout<< "hasil perkalian: " <<kali;
    cout<< "hasil pengurangan: " <<kurang;

    return 0 ; }


