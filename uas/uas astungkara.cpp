#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan angka: " << endl;
    cin >> n;

    if (n > 0) {
        cout << "Bilangan tersebut adalah positif " << endl;
    } else if (n < 0) {
        cout << "Bilangan tersebut adalah negatif " << endl;
    } else {
        cout << "Bilangan tersebut adalah nol " << endl;
    }

    return 0;
}


