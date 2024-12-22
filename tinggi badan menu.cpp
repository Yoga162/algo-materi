#include <iostream>
using namespace std;

int main() {
    int tinggi, berat_sekarang, berat_ideal, jenis_kelamin;

    cout << "Masukkan Tinggi Badan: ";
    cin >> tinggi;
    cout << "Masukkan Jenis Kelamin:" << endl << "1 = Laki-laki " << endl << "2 = Perempuan" << endl ;
    cin >> jenis_kelamin;
    cout << "Masukkan Berat Sekarang: ";
    cin >> berat_sekarang;

    if (jenis_kelamin == 1) {
        berat_ideal = (tinggi - 100) * 0.9;
    } else if (jenis_kelamin == 2) {
        berat_ideal = (tinggi - 100) * 0.8;
    } else {
        cout << "Jenis kelamin tidak valid.\n";
        return 1;
    }

    int selisih = berat_sekarang - berat_ideal;

    cout << "==========================================" << endl;
    cout << "Berat Badan Ideal (BBI) = " << berat_ideal << " kg\n";
    cout << "Selisih = " << selisih << " kg\n";

    return 0;
}
