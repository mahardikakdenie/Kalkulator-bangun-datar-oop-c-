#ifndef __TRAPESIUM
#define __TRAPESIUM
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class Trapesium : public BangunRuang{
    public:
        int ab,bc,cd,da ;
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
        void input () {
            cout << "Keliling Trapesium " <<endl;
            cout << "Masukan Inputan AB : ";cin >> ab;
            cout << "Masukan Inputan BC : ";cin >> bc;
            cout << "Masukan Inputan CD : " ;cin >> cd;
            cout << "Masukan Inputan DA : ";cin >> da;
        }

        void DisplayK () {
            cout << "Rumus Keliling Trapesium " << endl;
            Hasil = ab + bc + cd + da ;
            cout << "Rumus Keliling Trapesium : " << ab << " + " << bc << " + " << cd << " + " << da << " = " << Hasil << endl;
            cout << "Hasil Keliling Trapesium : " << Hasil << endl;
        }

};
#endif
