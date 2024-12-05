#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukan jumlah bintang paling atas: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Cek apakah i adalah angka genap
            cout << " *";
        } else {
        cout << " " << i ;
        }

