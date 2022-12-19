#include <iostream>
#include <conio.h>
using namespace std;
int cari(int data[], int n, int k)
{
    int posisi, i, ketemu;
    if (n <= 0)
        posisi = -1;
    else
    {
        ketemu = 0;
        i = 1;
        while ((i < n - 1) && !ketemu)
            if (data[i] == k)
            {
                posisi = i;
                ketemu = 1;
            }
            else
                i++;
        if (!ketemu)
            posisi = -1;
    }
    return posisi;
}
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int data[8];
    int dicari;
    cout << "Masukkan Data : ";
    for (int a = 0; a < 8; a++)
    {
        cin >> data[a];
    }
    cout << "Masukkan Data yang dicari : ";
    cin >> dicari;
    cout << "Posisi " << dicari << " dalam larik data: "
         << (cari(data, 8, dicari)) << "\n";
    getch();
}
