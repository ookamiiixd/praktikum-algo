#include <iostream>
using namespace std;
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int jumah_kelompok, jumlah_anggota;
    cout << "Masukkan jumlah kelompok = ";
    cin >> jumah_kelompok;
    cout << "Masukkan jumlah anggota = ";
    cin >> jumlah_anggota;
    cout << endl;
    string **kelompok = new string *[jumlah_anggota];
    for (int i = 0; i < jumah_kelompok; i++)
    {
        kelompok[i] = new string[jumlah_anggota];
    }
    for (int i = 0; i < jumah_kelompok; i++)
    {
        cout << "Anggota kelompok " << i + 1 << ":" << endl;
        for (int j = 0; j < jumlah_anggota; j++)
        {
            cout << "Masukkan nama anggota nomor " << j + 1 << " = ";
            cin >> kelompok[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < jumah_kelompok; i++)
    {
        cout << "Kelompok " << i + 1 << endl;
        for (int j = 0; j < jumlah_anggota; j++)
        {
            cout << j + 1 << ". " << kelompok[i][j] << endl;
        }
        cout << endl;
    }
}