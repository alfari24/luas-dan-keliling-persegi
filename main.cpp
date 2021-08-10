#include <iostream>

using namespace std;

int luasPersegi (int sisi){

    return (sisi*sisi);
}

int kelilingPersegi (int sisi){
    return 4*sisi;
}
int main()
{
    int s;
    cout<<"masukkan sisi persegi :"; cin >> s;
    cout <<"luas persegi = " << luasPersegi(s)<<endl;
    cout <<"keliling persegi ="<<kelilingPersegi(s)<<endl;

    return 0;
}
