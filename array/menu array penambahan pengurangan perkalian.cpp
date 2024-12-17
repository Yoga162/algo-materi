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

// Fungsi untuk menampilkan array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Elemen-elemen dalam array saat ini adalah:" << endl;
    displayArray(arr, n);

    int choice; // Variabel untuk pilihan menu

    // Perulangan menu
    do {
        cout << "\n=== MENU OPERASI ARRAY ===" << endl;
        cout << "1. Perkalian" << endl;
        cout << "2. Penambahan" << endl;
        cout << "3. Pengurangan" << endl;
        cout << "4. Tampilkan Array" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih operasi (1-5): ";
        cin >> choice;

        if (choice == 1) {
            int multiplier;
            cout << "Masukkan nilai pengali: ";
            cin >> multiplier;
            multiplyArray(arr, n, multiplier);
            cout << "Array setelah perkalian: ";
            displayArray(arr, n);
        }
        else if (choice == 2) {
            int valueToAdd;
            cout << "Masukkan nilai yang akan ditambahkan: ";
            cin >> valueToAdd;
            addArray(arr, n, valueToAdd);
            cout << "Array setelah penambahan: ";
            displayArray(arr, n);
        }
        else if (choice == 3) {
            int valueToSubtract;
            cout << "Masukkan nilai yang akan dikurangkan: ";
            cin >> valueToSubtract;
            subtractArray(arr, n, valueToSubtract);
            cout << "Array setelah pengurangan: ";
            displayArray(arr, n);
        }
        else if (choice == 4) {
            cout << "Elemen-elemen dalam array saat ini adalah: ";
            displayArray(arr, n);
        }
        else if (choice == 5) {
            cout << "Program selesai. Terima kasih!" << endl;
        }
        else {
            cout << "Pilihan tidak valid! Silakan pilih antara 1-5." << endl;
        }
    } while (choice != 5); // Program berhenti jika pilihan 5

    return 0;
}
