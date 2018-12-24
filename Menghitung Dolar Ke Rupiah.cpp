#include <iostream>
using namespace std;
float rupiah (float x);

int main()

{
    float n;
    cout<<"Konversi Mata Uang"<<endl;
    cout<<"Masukkan Dollar = ";
    cin>>n;
    cout<<"="<<"Rp"<<rupiah(n)<<endl;
    cout<<endl;

    return 0;

}
float rupiah  (float x)
{
    cout<<"hasil";
    float hasil;
    hasil= x*15000;
    return hasil;

}
