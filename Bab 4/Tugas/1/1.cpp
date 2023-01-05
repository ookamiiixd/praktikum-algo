#include <iostream>
#include <conio.h>
using namespace std;
int pangkat(int y, int x)
{
    if (x == 1)
        return y;
    return y * pangkat(y, x - 1);
}
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int i, j;
    cout << "Program Menghitung Pangkat\n";
    cout << "Masukan angka = ";
    cin >> i;
    cout << "Masukkan pangkat = ";
    cin >> j;
    cout << "Hasil = ";
    cout << pangkat(i, j);
}
