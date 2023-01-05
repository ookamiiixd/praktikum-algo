#include <stdio.h>
int pangkat(int y, int x)
{
    if (x == 1)
        return y;
    return y * pangkat(y, x - 1);
}
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    int i, j;
    printf("Program Menghitung Pangkat\n");
    printf("Masukan angka = ");
    scanf("%d", &i);
    printf("Masukkan pangkat = ");
    scanf("%d", &j);
    printf("Hasil = ");
    printf("%d", pangkat(i, j));
}
