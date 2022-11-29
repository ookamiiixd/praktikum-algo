#include <iostream>
using namespace std;
int main()
{
    typedef int matrik[3][2];
    matrik elemen1, elemen2, hasil_jumlah;
    int baris, kolom;
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            cout << "Elemen A[" << baris << "][" << kolom << "] = ";
            cin >> elemen1[baris][kolom];
        }
    }
    cout << endl;
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            cout << "Elemen  B[" << baris << "][" << kolom << "] = ";
            cin >> elemen2[baris][kolom];
        }
    }
    cout << endl;
    {
        for (baris = 0; baris < 3; baris++)
        {
            for (kolom = 0; kolom < 2; kolom++)
            {
                hasil_jumlah[baris][kolom] = elemen1[baris][kolom] + elemen2[baris][kolom];
            }
        }
        system("cls");
        cout << "Hasil Penjumlahan Elemen A dan Elemen B adalah : " << endl;
        for (baris = 0; baris < 3; baris++)
        {
            for (kolom = 0; kolom < 2; kolom++)
            {
                cout << "Hasil Jumlah [" << baris << "][" << kolom << "] = " << hasil_jumlah[baris][kolom] << endl;
            }
        }
    }
}