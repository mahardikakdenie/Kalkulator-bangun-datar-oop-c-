#ifndef __BELAHKETUPAT
#define __BELAHKETUPAT
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class BelahKetupat : public BangunRuang
{
public:
    void LuasBelahKetupat()
    {
        cout << "\nLuas BelahKetupat" << endl;
        cout << "Masukan Panjang Diagonal 1 : ";
        cin >> value1;
        cout << "Masukan Panjang Diagonal 2 : ";
        cin >> value2;
    }
    void Display()
    {
        cout << "\nRumus Luas BelahKetupat: 0.5 * Diagonal1 * diagonal2" << endl;
        cout << "Luas BelahKetupat = 0.5"
             << " * " << value1 << " * " << value2 << endl;
        Hasil = 0.5 * value1 * value2;
        cout << "Luas BelahKetupat: " << Hasil << endl;
    }
    void Inputan()
    {
        cout << "Masukan Panjang Sisi : ";
        cin >> value1;
    }
    void DisplayK()
    {
        cout << "\nKeliling Belah Ketupat " << endl;
        cout << "Rumus Keliling Belah Ketupat  : sisi * 4 " << endl;
        Hasil = value1 * 4;
        cout << "Rumus Keliling Belah Ketupat : " << value1 << " *  4"
             << " = " << Hasil << endl;
        cout << "Keliling Bellah Ketupat : " << Hasil << endl;
    }
};

#endif