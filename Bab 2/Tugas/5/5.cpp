#include <iostream>
using namespace std;
int main()
{
    int x, y;
    float f, j;
    string anggota;
    cout << "masukan jumlah kelompok : ";
    cin >> j;
    for (x = 0; x < j;)
    {
        cout << "kelompok"
             << " " << x + 1 << endl;
        cout << "jumlah anggota kelompok : ";
        cin >> f;
        for (y = 1; y <= f;)
        {
            cout << "" << y << ".";
            cin >> anggota;
            y++;
        }
        x++;
    }
}