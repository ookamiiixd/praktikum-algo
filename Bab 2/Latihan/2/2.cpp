#include <iostream>
using namespace std;
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    float nilai[2][3];
    int baris, kolom;
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            cout << "Nilai [baris][kolom] ke-[" << baris + 1 << "][" << kolom + 1 << "] = ";
            cin >> nilai[baris][kolom];
        }
    }
    cout << endl;
    cout << "Matriks Nilai yang dimasukkan : " << endl
         << endl;
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            cout << nilai[baris][kolom] << " ";
        }
        cout << endl;
    }
    cout << endl;
    float jml_nilai1, jml_nilai2;
    float rerata1, rerata2;
    jml_nilai1 = 0;
    jml_nilai2 = 0;
    float jml_nilaicol1, jml_nilaicol2, jml_nilaicol3;
    float reratacol1, reratacol2, reratacol3;
    jml_nilaicol1 = 0;
    jml_nilaicol2 = 0;
    jml_nilaicol3 = 0;
    for (baris = 0; baris < 2; baris++)
    {
        if (baris == 0)
        {
            for (kolom = 0; kolom < 3; kolom++)
                jml_nilai1 = jml_nilai1 + nilai[baris][kolom];
        }
        else
        {
            for (kolom = 0; kolom < 3; kolom++)
                jml_nilai2 = jml_nilai2 + nilai[baris][kolom];
        }
    }
    rerata1 = jml_nilai1 / 3;
    rerata2 = jml_nilai2 / 3;
    cout << "Rerata baris ke 1 = " << rerata1 << endl;
    cout << "Rerata baris ke 2 = " << rerata2 << endl;
    // per kolom
    cout << endl;
    for (kolom = 0; kolom < 3; kolom++)
    {
        if (kolom == 0)
        {
            for (baris = 0; baris < 2; baris++)
                jml_nilaicol1 = jml_nilaicol1 + nilai[baris][kolom];
        }
        else if (kolom == 1)
        {
            for (baris = 0; baris < 2; baris++)
                jml_nilaicol2 = jml_nilaicol2 + nilai[baris][kolom];
        }
        else
        {
            for (baris = 0; baris < 2; baris++)
                jml_nilaicol3 = jml_nilaicol3 + nilai[baris][kolom];
        }
    }
    reratacol1 = jml_nilaicol1 / 2;
    reratacol2 = jml_nilaicol2 / 2;
    reratacol3 = jml_nilaicol3 / 2;
    cout << "Rerata kolom ke 1 = " << reratacol1 << endl;
    cout << "Rerata kolom ke 2 = " << reratacol2 << endl;
    cout << "Rerata kolom ke 3 = " << reratacol3 << endl;
}