#ifndef __TRAPESIUM
#define __TRAPESIUM
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class Trapesium : public BangunRuang{
    public:
        void LuasTrapesium(){
            cout<<"Masukan Panjang Sisi Sejajar : ";cin>>value1;
            cout<<"Masukan Tinggi : ";cin>>value2;
        }
        void Display(){
            cout<<"\nRumus Luas Trapesium : 0.5 * Panjang sisi sejajar * tinggi "<<endl;
            cout<<"Luas Trapesium = 0.5 "<<" * "<<value1<<" * "<<value2<<endl;
            Hasil=0.5 * value1 * value2 ;
            cout<<"Luas Trapesium : "<<Hasil<<endl;
        }

        void DisplayK () {
            cout << "Rumus Keliling Trapesium " << endl;
            Hasil = value1 + value1 + value2 + value2 ;
            cout << "Hasil Keliling Trapesium : " << Hasil << endl;
        }

};
#endif
