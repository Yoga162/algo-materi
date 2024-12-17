#include <iostream>

using namespace std;

int main () {
  int n ;

  cout << "masukan angka:" ;
  cin >> n ;

  int arr[n] ;

  cout << "masukan"<< "elemen untuk array:" << endl ;
  for (int i = 0; i < n; i++) {
    cout << "elemen ke-" << i + 1 << ":" ;
    }

    cout << "elemen elemen dalam array adalah:" << endl ;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl ;

    return 0 ;

}
