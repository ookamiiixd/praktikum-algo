#include <iostream>
using namespace std;
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    typedef int **matrik;
    matrik elemen1, elemen2, hasil_jumlah, hasil_kurang, hasil_kali;
    int baris, kolom;
    cout << "Jumlah baris = ";
    cin >> baris;
    cout << "Jumlah kolom = ";
    cin >> kolom;
    elemen1 = new int *[kolom];
    elemen2 = new int *[kolom];
    hasil_jumlah = new int *[kolom];
    hasil_kurang = new int *[kolom];
    hasil_kali = new int *[kolom];
    for (int i = 0; i < kolom; i++)
    {
        elemen1[i] = new int(baris);
        elemen2[i] = new int(baris);
        hasil_jumlah[i] = new int(baris);
        hasil_kurang[i] = new int(baris);
        hasil_kali[i] = new int(baris);
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen A[" << i << "][" << j << "] = ";
            cin >> elemen1[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen  B[" << i << "][" << j << "] = ";
            cin >> elemen2[i][j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_jumlah[i][j] = elemen1[i][j] + elemen2[i][j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_kurang[i][j] = elemen1[i][j] - elemen2[i][j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_kali[i][j] = elemen1[i][j] * elemen2[i][j];
        }
    }
    // system("cls");
    cout << endl;
    cout << "Hasil Penjumlahan Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Jumlah [" << i << "][" << j << "] = " << hasil_jumlah[i][j] << endl;
        }
    }
    cout << endl;
    cout << "Hasil Pengurangan Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Kurang [" << i << "][" << j << "] = " << hasil_kurang[i][j] << endl;
        }
    }
    cout << endl;
    cout << "Hasil Perkalian Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Kali [" << i << "][" << j << "] = " << hasil_kali[i][j] << endl;
        }
    }
}