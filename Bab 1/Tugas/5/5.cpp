#include <iostream>
using namespace std;
main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int pilihan;
    do
    {
        cout << "MENU PILIHAN" << endl;
        cout << "1. Dangdut" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Rock" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilihan Anda (1/2/3/4) ? ";
        cin >> pilihan;
        cin.ignore();
        if (pilihan != 4)
        {
            cout << "Anda memilih menu " << pilihan << endl;
            cout << "Tekan ENTER untuk kembali ke menu utama" << endl;
            cin.ignore();
        }
    } while (pilihan != 4);
}