//9. Buat program dalam c++ yang menerapkan preprocessor #line dan #pragma

//preprocessor #line

#include <iostream>
#line 2 "menerapkan preprocessor #line dan #pragma"
using namespace std;

int main() {
   cout << "Nama file : " << __FILE__ << endl;
   cout << "Baris program : " << __LINE__ << endl;
   cout << "Waktu pengerjaan : " << __TIME__ << endl;
   cout << "Tanggal Pengerjaan : " << __DATE__ << endl;

   return 0;
}
