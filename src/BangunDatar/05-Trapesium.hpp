#ifndef __TRAPESIUM
#define __TRAPESIUM
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class Trapesium : public BangunRuang
{
public:
    int ab, bc, cd, da;
    void LuasTrapesium()
    {
        cout << "\nLuas Trapesium" << endl;
        cout << "Masukan Panjang Sisi Sejajar : ";
        cin >> value1;
        cout << "Masukan Tinggi : ";
        cin >> value2;
    }
    void Display()
    {
        cout << "\nRumus Luas Trapesium : 0.5 * Panjang sisi sejajar * tinggi " << endl;
        cout << "Luas Trapesium = 0.5 "
             << " * " << value1 << " * " << value2 << endl;
        Hasil = 0.5 * value1 * value2;
        cout << "Luas Trapesium : " << Hasil << endl;
    }
    void input()
    {
        cout << "\nKeliling Trapesium : " << endl;
        cout << "Masukan Inputan AB : ";
        cin >> ab;
        cout << "Masukan Inputan BC : ";
        cin >> bc;
        cout << "Masukan Inputan CD : ";
        cin >> cd;
        cout << "Masukan Inputan DA : ";
        cin >> da;
    }

    void DisplayK()
    {
        cout << "\nRumus Keliling Trapesium " << endl;
        Hasil = ab + bc + cd + da;
        cout << "Rumus Keliling Trapesium : "
             << "AB + BC + CD + DA " << endl;
        cout << "Rumus Keliling Trapesium : " << ab << " + " << bc << " + " << cd << " + " << da << " = " << Hasil << endl;
        cout << "Hasil Keliling Trapesium : " << Hasil << endl;
    }
};
#endif
