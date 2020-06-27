//4. Buat program dalam c++ yang menerapkan preprocessor macro fungsi

#include <iostream>
#define uangjajan(adi , agung) (adi +  agung)
using namespace std;
int main (){
	cout<<"Jika uang jajan adi yaitu 5000 dan agung yaitu 3000, "<<endl;
	cout<<"berapakah total uang yang harus dikeluarkan orang tuanya?"<<endl;
    cout<<"Total uang yang harus dikeluarkan orang tuanya "<<(uangjajan(5000, 3000))<<endl;
    return 0;
}

