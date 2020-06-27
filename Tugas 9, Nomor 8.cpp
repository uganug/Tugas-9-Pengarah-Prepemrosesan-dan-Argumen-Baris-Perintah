//9. Buat program dalam c++ yang menerapkan preprocessor kompilasi bersyarat

#define hari 0		// 1 = hari hujan dan 0 = hari tidak hujan

#if hari == 1
#define hari "lanjut tidur"

#elif hari == 0
#define hari "berangkat ke kampus"

#else
#define hari "bukan pilihan"
#endif

#include <iostream>
using namespace std;

int main(){
	cout<<"Keputusan yang diambil Adi yaitu "<<(hari);
	return 0;
}

