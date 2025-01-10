#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    int id;
    string nama;
    int age;
    string department;
    float score;
};

void printSiswa(const Siswa siswa[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "ID: " << siswa[i].id
             << ", Name: " << siswa[i].nama
             << ", Age: " << siswa[i].age
             << ", Department: " << siswa[i].department
             << ", Score: " << siswa[i].score << endl;
    }
}

int main() {
    const int jumlahSiswa = 3; // Jumlah siswa ditentukan
    Siswa siswa[jumlahSiswa]; // Array kosong

    // Input data siswa
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan data untuk siswa ke-" << i + 1 << ":\n";
        cout << "  ID: ";
        cin >> siswa[i].id;
        cin.ignore(); // Membersihkan buffer
        cout << "  Nama: ";
        getline(cin, siswa[i].nama);
        cout << "  Usia: ";
        cin >> siswa[i].age;
        cin.ignore();
        cout << "  Jurusan: ";
        getline(cin, siswa[i].department);
        cout << "  Score: ";
        cin >> siswa[i].score;
    }

    // Cetak data siswa
    printSiswa(siswa, jumlahSiswa);

    return 0;
}


