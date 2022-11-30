#include <iostream>
using namespace std;
main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int l = 0;
    for (int j = 0; j <= 10; j++)
    {
        for (int k = j; k <= l; k++)
        {
            cout << k << ' ';
        }
        l += 2;
        cout << "\n";
    }
}