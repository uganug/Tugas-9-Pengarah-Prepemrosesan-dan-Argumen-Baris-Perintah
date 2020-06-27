//10. Buat program dalam c++ yang menerapkan preprocessor #error

#include <iostream>
#define pisang 0 // 1 = warna kuning dan 0 bukan warna kuning
using namespace std;
int main (){
    #if pisang == 0
    #error pisang harus berwarna kuning
    #endif
    
    return 0;
}

