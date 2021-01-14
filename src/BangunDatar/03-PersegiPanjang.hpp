#ifndef ____PERSEGIPANJANG
#define __PERSEGIPANJANG
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"



using namespace std;

class PersegiPanjang : public BangunRuang{
    public:
        void luasPersegiPanjang(){
            cout<<"\nLuas Persegi Panjang : "<<endl;
            cout<<"Masukan Panjang : ";cin>>value1;
            cout<<"Masukan Lebar : ";cin>>value2;
        }

        void InputanKeliling(){
            cout<<"\nKeliling Persegi Panjang : "<<endl;
            cout<<"Masukan Panjang : ";cin>>value1;
            cout<<"Masukan Lebar : ";cin>>value2;
        }

         void Display(){
            cout<<"\nRumus Luas Persegi Panjang : Panjang * lebar"<<endl;
            cout<<"Rumus Luas PersegiPanjang = "<<value1<<" * "<<value2<<endl;
            Hasil=value1*value2;
            cout<<"Luas Persegi Panjang : "<<Hasil<<endl;
        }

        void DisplayK () {
            cout << "\nKeliling Persegi Panjang "<<endl;
            cout<< "Rumus Keliling Persegi Panjang : 2 * ( panjang + lebar )"<<endl;
            Hasil = 2 * (value1 + value2) ;
            cout << "Rumus Keliling Panjang  : " << " 2 " << " * " << " ( " << value1 << " + " << value2 << " ) " << " = " << Hasil << endl;
            cout << "Keliling Persegi Panjang :  " << Hasil << endl;
        }
};

#endif