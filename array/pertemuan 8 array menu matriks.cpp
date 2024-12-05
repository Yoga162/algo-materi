#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100;
const int ROWS = 3;
const int COLS = 3;

// Prosedur untuk menampilkan menu utama
void displayMenu() {
    cout << "\n=== MENU MANIPULASI ARRAY ===\n";
    cout << "1. Tentukan panjang array 1D\n";
    cout << "2. Masukkan nilai ke dalam array 1D\n";
    cout << "3. Ganti nilai dalam array 1D\n";
    cout << "4. Tampilkan isi array 1D\n";
    cout << "5. Tampilkan elemen array 2D (3x3)\n";
    cout << "6. Keluar\n";
    cout << "Pilih menu: ";
}

// Fungsi untuk menentukan panjang array
void setArrayLength(int &size) {
    cout << "\nMasukkan panjang array (maksimal " << MAX_ARRAY_SIZE << "): ";
    cin >> size;
    if (size > MAX_ARRAY_SIZE) {
        cout << "Panjang array melebihi batas maksimal! Panjang akan diset ke " << MAX_ARRAY_SIZE << ".\n";
        size = MAX_ARRAY_SIZE;
    } else if (size <= 0) {
        cout << "Panjang array tidak valid! Panjang akan diset ke 0.\n";
        size = 0;
    } else {
        cout << "Panjang array berhasil diset ke " << size << ".\n";
    }
}

// Fungsi untuk memasukkan nilai ke dalam array 1D
void enterArrayValues(int arr[], int size) {
    if (size == 0) {
        cout << "Panjang array belum ditentukan. Silakan tentukan panjang array terlebih dahulu.\n";
        return;
    }
    cout << "\nMasukkan nilai untuk setiap elemen array:\n";
    for (int i = 0; i < size; i++) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Nilai berhasil dimasukkan!\n";
}

// Fungsi untuk mengganti nilai dalam array 1D
void updateArrayValue(int arr[], int size) {
    if (size == 0) {
        cout << "Array kosong. Tidak ada nilai yang bisa diubah.\n";
        return;
    }
    int index, newValue;
    cout << "\nMasukkan indeks elemen yang ingin diubah (0 - " << size - 1 << "): ";
    cin >> index;
    if (index < 0 || index >= size) {
        cout << "Indeks tidak valid!\n";
        return;
    }
    cout << "Masukkan nilai baru untuk elemen ke-" << index << ": ";
    cin >> newValue;
    arr[index] = newValue;
    cout << "Nilai berhasil diubah!\n";
}

// Fungsi untuk menampilkan isi array 1D
void displayArray1D(const int arr[], int size) {
    if (size == 0) {
        cout << "Array kosong. Silakan masukkan nilai terlebih dahulu.\n";
        return;
    }
    cout << "\nIsi array 1D: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Fungsi untuk mencetak elemen array 2D
void displayArray2D(const int matrix[ROWS][COLS]) {
    cout << "\nIsi array 2D:\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Element at [" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }
}

int main() {
    int arr[MAX_ARRAY_SIZE];
    int size = 0;
    int choice;

    // Array 2D tetap (3x3)
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                setArrayLength(size);
                break;
            case 2:
                enterArrayValues(arr, size);
                break;
            case 3:
                updateArrayValue(arr, size);
                break;
            case 4:
                displayArray1D(arr, size);
                break;
            case 5:
                displayArray2D(matrix);
                break;
            case 6:
                cout << "Keluar dari program. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
        }
    } while (choice != 6);

    return 0;
}
