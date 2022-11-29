#include <iostream>
using namespace std;
main()
{
    int i, j;
    int data[2][2];
    cout << "Input Data" << endl;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            cout << "data[" << i + 1 << "][" << j + 1 << "]=";
            cin >> data[i][j];
        }
    }
    cout << "Matrik yang diinputkan : " << endl;
    for (i = 0; i <= 1; i++)
    {
        for (j = 0; j <= 1; j++)
        {
            cout << data[i][j] << " ";
        }
        cout << endl;
    }
}
