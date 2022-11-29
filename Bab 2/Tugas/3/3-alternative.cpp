#include <iostream>
using namespace std;
int main()
{
    // dynamic array solution from https://stackoverflow.com/a/936709
    typedef int *matrik;
    matrik elemen1, elemen2, hasil_jumlah, hasil_kurang, hasil_kali;
    int baris, kolom;
    cout << "Jumlah baris = ";
    cin >> baris;
    cout << "Jumlah kolom = ";
    cin >> kolom;
    elemen1 = new int(baris * kolom);
    elemen2 = new int(baris * kolom);
    hasil_jumlah = new int(baris * kolom);
    hasil_kurang = new int(baris * kolom);
    hasil_kali = new int(baris * kolom);
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen A[" << i << "][" << j << "] = ";
            cin >> elemen1[i * kolom + j];
        }
    }
    cout << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Elemen  B[" << i << "][" << j << "] = ";
            cin >> elemen2[i * kolom + j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_jumlah[i * kolom + j] = elemen1[i * kolom + j] + elemen2[i * kolom + j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_kurang[i * kolom + j] = elemen1[i * kolom + j] - elemen2[i * kolom + j];
        }
    }
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            hasil_kali[i * kolom + j] = elemen1[i * kolom + j] * elemen2[i * kolom + j];
        }
    }
    system("cls");
    cout << endl;
    cout << "Hasil Penjumlahan Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Jumlah [" << i << "][" << j << "] = " << hasil_jumlah[i * kolom + j] << endl;
        }
    }
    cout << endl;
    cout << "Hasil Pengurangan Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Kurang [" << i << "][" << j << "] = " << hasil_kurang[i * kolom + j] << endl;
        }
    }
    cout << endl;
    cout << "Hasil Perkalian Elemen A dan Elemen B adalah : " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Hasil Kali [" << i << "][" << j << "] = " << hasil_kali[i * kolom + j] << endl;
        }
    }
}