//9. Buat program dalam c++ yang menerapkan preprocessor #line dan #pragma

//preprocessor #pragma

#include <iostream>
using namespace std;
void hello();
void world();

#pragma starup hello
#pragma exit world

void hello(){
    cout<<"hello ";
}

void world(){
    cout<<"world"<<endl;
}

int main ()
{
    hello();
    world();
    return 0;
}

