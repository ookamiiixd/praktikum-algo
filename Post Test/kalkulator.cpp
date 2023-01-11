#include <iostream>
using namespace std;
int data[100], index = 0;
void simpan(int x)
{
    data[index] = x;
    index += 1;
}
void kalkulasi(int operasi)
{
    int x, y, hasil;
    cout << "Masukkan angka pertama = ";
    cin >> x;
    cout << "Masukkan angka kedua = ";
    cin >> y;
    if (operasi == 1)
        hasil = x + y;
    else if (operasi == 2)
        hasil = x - y;
    else
        hasil = x * y;
    simpan(hasil);
    cout << "Hasil = " << hasil << "\n";
}
void tampil()
{
    int i, j, pilih;
    cout << "Pengurutan Data\n";
    cout << "1. Ascending\n";
    cout << "2. Descending\n";
    cout << "Pilih salah satu = ";
    cin >> pilih;
    if (pilih == 1)
    {
        for (i = 0; i < index; i++)
        {
            for (j = i; j > 0 && data[j] < data[j - 1]; j--)
            {
                int temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
    else
    {
        for (i = 0; i < index; i++)
        {
            for (j = i; j > 0 && data[j] > data[j - 1]; j--)
            {
                int temp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
    cout << "Hasil = ";
    for (i = 0; i < index; i++)
    {
        cout << data[i] << " ";
    }
    cout << "\n";
}
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    cout << "Kalkulator Sederhana\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Tampilkan Riwayat Hasil Kalkulator\n";
    cout << "5. Keluar\n\n";
    int pilih;
    do
    {
        cout << "Pilih salah satu = ";
        cin >> pilih;
        if (pilih == 1 || pilih == 2 || pilih == 3)
            kalkulasi(pilih);
        else if (pilih == 4)
            tampil();
        else if (pilih == 5)
            cout << "Program selesai\n";
        else
            cout << "Pilihan tidak ada\n";
    } while (pilih != 5);
}