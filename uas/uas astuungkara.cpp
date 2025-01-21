
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;

    if (n < 0) {
        cout << "Masukan bilangan bulat positif!";
    } else {
        int jumlahGanjil = 0;
        cout << "Bilangan ganjil: ";
        for (int i = 1; i <= n; i++) {
            if (i % 2 != 0) {
                if (i != n) cout << i << " ";
                jumlahGanjil += i;
            }
        }
        cout << "\nJumlah bilangan ganjil: " << jumlahGanjil << endl;
    }

  return 0;
}

