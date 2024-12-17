#include <iostream>
using namespace std;

// Fungsi untuk mengalikan setiap elemen array dengan nilai tertentu
void multiplyArray(int arr[], int n, int multiplier) {
    for (int i = 0; i < n; i++) {
        arr[i] *= multiplier;
    }
}

// Fungsi untuk menambahkan nilai tertentu ke setiap elemen array
void addArray(int arr[], int n, int valueToAdd) {
    for (int i = 0; i < n; i++) {
        arr[i] += valueToAdd;
    }
}

// Fungsi untuk mengurangkan nilai tertentu dari setiap elemen array
void subtractArray(int arr[], int n, int valueToSubtract) {
    for (int i = 0; i < n; i++) {
        arr[i] -= valueToSubtract;
    }
}

int main() {
    int n;

    // Meminta pengguna untuk menentukan ukuran array
    cout << "Masukkan ukuran array: ";
    cin >> n;

    // Deklarasi array dengan ukuran yang dimasukkan pengguna
    int arr[n];

    // Meminta pengguna untuk mengisi nilai ke dalam array
    cout << "Masukkan " << n << " elemen untuk array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan elemen-elemen array sebelum operasi
    cout << "Elemen-elemen dalam array sebelum operasi adalah:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Operasi perkalian
    int multiplier;
    cout << "Masukkan nilai pengali: ";
    cin >> multiplier;
    multiplyArray(arr, n, multiplier);

    cout << "Elemen-elemen dalam array setelah perkalian adalah:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Operasi penambahan
    int valueToAdd;
    cout << "Masukkan nilai yang akan ditambahkan: ";
    cin >> valueToAdd;
    addArray(arr, n, valueToAdd);

    cout << "Elemen-elemen dalam array setelah penambahan adalah:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Operasi pengurangan
    int valueToSubtract;
    cout << "Masukkan nilai yang akan dikurangkan: ";
    cin >> valueToSubtract;
    subtractArray(arr, n, valueToSubtract);

    cout << "Elemen-elemen dalam array setelah pengurangan adalah:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

