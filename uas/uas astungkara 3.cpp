#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Siswa {
    string nama;
    int nilai;
    string status;
};

int main() {
    int jumlahSiswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    vector<Siswa> siswa(jumlahSiswa);


    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan nama siswa " << i + 1 << ": ";
        cin >> siswa[i].nama;
        cout << "Masukkan nilai ujian siswa " << i + 1 << ": ";
        cin >> siswa[i].nilai;


        if (siswa[i].nilai >= 60) {
            siswa[i].status = "Lulus";
        } else {
            siswa[i].status = "Tidak Lulus";
        }
}

    cout << "Hasil: " << endl;
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Nama: " << siswa[i].nama << endl;
        cout << "Nilai: " << siswa[i].nilai << endl;
        cout << "Status: " << siswa[i].status << endl;
        cout << endl;
    }

    return 0;
}
