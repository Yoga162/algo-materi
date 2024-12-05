#include <iostream>
using namespace std;

int add(int a, int b);  // Deklarasi fungsi tambah
void subtract(int a, int b);  // Deklarasi fungsi kurang

int main() {
    int num1, num2;

    // Meminta input dari pengguna
    cout << "Masukkan angka pertama: ";
    cin >> num1;
    cout << "Masukkan angka kedua: ";
    cin >> num2;

    // Memanggil fungsi add dan subtract
    int sum = add(num1, num2);
    cout << "Jumlah: " << sum << endl;

    subtract(num1, num2);

    return 0;
}

// Fungsi untuk menambah dua angka
int add(int a, int b) {
    return a + b;
}

// Fungsi untuk mengurangkan dua angka
void subtract(int a, int b) {
    int result = a - b;
    cout << "Selisih: " << result << endl;
}
