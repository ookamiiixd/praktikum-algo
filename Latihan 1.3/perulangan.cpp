#include <iostream>
using namespace std;

main()
{
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