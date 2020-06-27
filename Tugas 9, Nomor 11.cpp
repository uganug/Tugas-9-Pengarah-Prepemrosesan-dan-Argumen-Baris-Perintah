//10. Buat program dalam c++ yang menerapkan preprocessor macro bawaan

#include <iostream>
using namespace std;

int main () {
   cout << "Baris program : " << __LINE__ << endl;
   cout << "Nama file : " << __FILE__ << endl;
   cout << "Tanggal Pengerjaan : " << __DATE__ << endl;
   cout << "Waktu pengerjaan : " << __TIME__ << endl;
   return 0;
}

