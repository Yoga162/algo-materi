#include <iostream>

using namespace std ;

int main () {
   int num [5] = {1, 2, 3, 4, 5} ;

   num [0] = 10 ;
   num [1] = 20 ;
   num [2] = 30 ;
   num [3] = 40 ;
   num [4] = 50 ;

   for ( int a = 0; a < 5; a++) {
    cout << "elemen" << a << " :" << num [ a] << endl ;
   }
   }
