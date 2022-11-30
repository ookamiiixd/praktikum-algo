#include <iostream>
using namespace std;
main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int i, j, k, x = 1;
    int matrik[3][4][4];
    cout << " 3 dimensi array " << endl
         << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                matrik[i][j][k] = x;
                cout << " " << matrik[i][j][k];
                x++;
            }
            cout << endl;
        }
        cout << endl;
    }
}