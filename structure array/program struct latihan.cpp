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

void printSiswa(const Siswa &siswa) {
    cout << "Detail Students:" << endl
         << "ID: " << siswa.id
         << ", Name: " << siswa.nama
         << ", Age: " << siswa.age
         << ", Department: " << siswa.department
         << ", Score: " << siswa.score << endl;
}

int main() {
    Siswa siswa1, siswa2, siswa3, siswa4, siswa5;

    siswa1.id = 101;
    siswa1.nama = "Alice";
    siswa1.age = 20;
    siswa1.department = "Computer Science";
    siswa1.score = 89.5;

    siswa2.id = 102;
    siswa2.nama = "Bob";
    siswa2.age = 22;
    siswa2.department = "Mechanical Engineering";
    siswa2.score = 76.3;

    siswa3.id = 103;
    siswa3.nama = "Charlie";
    siswa3.age = 19;
    siswa3.department = "Electrical Engineering";
    siswa3.score = 92.7;

    siswa4.id = 104;
    siswa4.nama = "Diana";
    siswa4.age = 21;
    siswa4.department = "Civil Engineering";
    siswa4.score = 85.0;

    siswa5.id = 105;
    siswa5.nama = "Edward";
    siswa5.age = 23;
    siswa5.department = "Information Technology";
    siswa5.score = 78.9;

    printSiswa(siswa1);
    printSiswa(siswa2);
    printSiswa(siswa3);
    printSiswa(siswa4);
    printSiswa(siswa5);

    return 0;
}























