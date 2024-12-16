#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;

    cout << "nilai adalah:" << a << endl ;
    cout << "alamat nilai a adalah:" << &a << endl ;

    cout << "pengambilan nilai menggunakan pointer:" << *ptr << endl ;

    return 0 ;
}
