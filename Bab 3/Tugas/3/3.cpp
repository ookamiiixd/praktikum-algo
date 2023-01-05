#include <iostream>
using namespace std;
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int banyakData, i, j;
    cout << "Pengurutan Data dengan Algoritma Insertion Sort\n";
    cout << "Masukkan Banyak Data : ";
    cin >> banyakData;
    int data[banyakData];
    for (i = 0; i < banyakData; i++)
    {
        cout << "data " << i + 1 << " = ";
        cin >> data[i];
    }
    for (i = 0; i < banyakData; i++)
    {
        for (j = i; j > 0 && data[j] > data[j - 1]; j--)
        {
            int temp = data[j - 1];
            data[j - 1] = data[j];
            data[j] = temp;
        }
    }
    cout << "Hasil Pengurutan Data : ";
    for (i = 0; i < banyakData; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
    return 0;
}
