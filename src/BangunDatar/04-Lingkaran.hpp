#ifndef __LINGKARAN
#define __LINGKARAN
#include <string>
#include <iostream>
#include "01-BangunRuang.hpp"

using namespace std;

class Lingkaran : public BangunRuang
{
private:
    float phi = 3.14;

public:
    void luasLingkaran()
    {
        cout << "Luas Lingkaran : " << endl;
        cout << "Masukan Jari-Jari : ";
        cin >> value1;
    }
    void InputanKeliling()
    {
        cout << "Keliling Lingkaran : " << endl;
        cout << "Masukan Jari-Jari : ";
        cin >> value1;
    }
    void Display()
    {
        cout << "\nRumus Luas Lingkaran : phi * jari-jari * jari-jari " << endl;
        cout << "Phi = 3.14 " << endl;
        cout << "Luas Lingkaran = " << phi << " * " << value1 << " * " << value1 << endl;
        Hasil = 3.14 * value1 * value1;
        cout << "Luas Lingkaran Adalah " << Hasil << endl;
    }
    void DisplayK()
    {
        cout << "\nKeliling Lingkaran " << endl;
        cout << "Rumus Keliling Lingkaran : phi * 2 * Jari - jari" << endl;
        Hasil = 3.14 * (2 * value1);
        cout << "Rumus Keliling : "
             << " 3.14 "
             << " * "
             << " 2 "
             << " * " << value1 << endl;

        cout << "Keliling Lingkarang : " << Hasil << endl;
    }
};

#endif