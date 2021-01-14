#ifndef __PERSEGI
#define __PERSEGI
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class Persegi : public BangunRuang
{
private:
public:
    void luasPersegi()
    {
        cout << "\nLuas Persegi : " << endl;
        cout << "Masukan Panjang Sisi : ";
        cin >> value1;
    }

    void InputKeliling()
    {
        cout << "\nKeliling Persegi : " << endl;
        cout << "Masukan Panjang Sisi : ";
        cin >> value1;
    }

    void Display()
    {
        cout << "\nRumus Luas Persegi : sisi * sisi" << endl;
        cout << "Rumus Luas Persegi = " << value1 << " * " << value1 << endl;
        Hasil = value1 * value1;
        cout << "Luas Persegi : " << Hasil << endl;
    }

    void displayK()
    {
        cout << "\nKeliling Persegi " << endl;
        cout << "Keliling Peregi : sisi + sisi + sisi + sisi " << endl;
        Hasil = value1 * value1 * value1 * value1;
        cout << "Rumus Keliling : " << value1 << " + " << value1 << " + "
             << value1 << " + " << value1 << " = " << Hasil << endl;
        cout << "Keliling Persegi : " << Hasil << endl;
    }
};
#endif