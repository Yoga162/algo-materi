#include <iostream>
using namespace std;

const int MAX_ARRAY_SIZE = 100; // Maksimum panjang array

// Prosedur untuk menampilkan menu utama
void displayMenu() {
    cout << "\n=== MENU MANIPULASI ARRAY ===\n";
    cout << "1. Tentukan panjang array\n";
    cout << "2. Masukkan nilai ke dalam array\n";
    cout << "3. Ganti nilai dalam array\n";
    cout << "4. Tampilkan isi array\n";
    cout << "5. Keluar\n";
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

// Fungsi untuk memasukkan nilai ke dalam array
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

// Fungsi untuk mengganti nilai dalam array
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

// Fungsi untuk menampilkan isi array
void displayArray(const int arr[], int size) {
    if (size == 0) {
        cout << "Array kosong. Silakan masukkan nilai terlebih dahulu.\n";
        return;
    }
    cout << "\nIsi array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[MAX_ARRAY_SIZE];
    int size = 0;
    int choice;

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
                displayArray(arr, size);
                break;
            case 5:
                cout << "Keluar dari program. Terima kasih!\n";
                break;
            default:
                cout << "Pilihan tidak valid! Silakan coba lagi.\n";
        }
    } while (choice != 5);

    return 0;
}
