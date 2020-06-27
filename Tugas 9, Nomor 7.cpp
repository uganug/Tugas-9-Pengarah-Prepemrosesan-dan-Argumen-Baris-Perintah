//7. Buat program dalam c++ yang menerapkan preprocessor #include

#include <iostream>
using namespace std;

int operasi(int adi, int agung){
    int total;
    total = adi + agung;
    return total;
}
int main (){
    int adi = 5000;
    int agung = 3000;
    cout<<"Jika uang jajan adi sebanyak "<<adi<<" dan "<<endl;
    cout<<"uang jajan agung sebanyak "<<agung<<endl;
    cout<<"Total uang jajan mereka sebanyak "<< operasi (adi, agung);
    return 0;
}

