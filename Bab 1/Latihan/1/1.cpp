#include <iostream>
using namespace std;
main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    char jenis;
    int panjang, lebar, luas, jari;
    float luaslingkar;
    cout << "Pilih persegi panjang<P> atau Lingkaran<L>: ";
    cin >> jenis;
    if (jenis == 'P' || jenis == 'p')
    {
        cout << "Panjang = ";
        cin >> panjang;
        cout << "Lebar = ";
        cin >> lebar;
        luas = panjang * lebar;
        cout << "Luas = " << luas << endl;
    }
    else if (jenis == 'L' || jenis == 'l')
    {
        cout << "Jari-jari = ";
        cin >> jari;
        luaslingkar = 3.14 * jari * jari;
        cout << "Luas = " << luaslingkar << endl;
    }
    else
    {
        cout << "Salah pilih" << endl;
    }
}