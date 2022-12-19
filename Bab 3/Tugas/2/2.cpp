#include <iostream>
using namespace std;
int cari(int data[], int n, int k, int m)
{
    int posisi, i, ketemu, pencacah = 0;
    if (n <= 0)
        posisi = -1;
    else
    {
        ketemu = 0;
        i = 1;
        while ((i < n + 1) && !ketemu)
            if (data[i] == k)
            {
                pencacah++;
                cout << "Pencacah " << pencacah << endl;
                if (pencacah != m)
                {
                    cout << "Ketemu" << pencacah << endl;
                    posisi = i;
                    ketemu = 1;
                }
                else
                    i--;
            }
            else
                i++;
        if (!ketemu)
            return posisi;
    }
}
int main()
{
    int data[9] = {10, 9, 4, 6, 3, 4, 2, 5, 0};
    int dicari;
    int ke;
    dicari = 4;
    ke = 2;
    cout << "Posisi " << dicari << " yang ke-" << ke << " dalam larik data : " << (cari(data, 4, dicari, ke)) << "\n ";
    ke = 1;
    cout << "Posisi " << dicari << " yang ke-" << ke << " dalam larik data : " << (cari(data, 1, dicari, ke)) << "\n ";
    dicari = 0;
    ke = 1;
    cout << "Posisi " << dicari << " yang ke-" << ke << " dalam larik data : " << (cari(data, 0, dicari, ke)) << "\n ";
    return 0;
}
