#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main()
{
    char jenis;
    int panjang, lebar;

    printf("Fungsi persegi panjang\n");
    printf("Luas (L)\n");
    printf("Keliling (K)\n");
    printf("Diagonal (D)\n");
    printf("Pilih fungsi persegi panjang: ");
    scanf("%s", &jenis);
    jenis = tolower(jenis);

    if (jenis != 'l' && jenis != 'k' && jenis != 'd')
    {
        printf("Fungsi yang anda masukkan salah");
        return 0;
    }

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    if (jenis == 'l')
    {
        int luas = panjang * lebar;
        printf("Luas = %d", luas);
    }
    else if (jenis == 'k')
    {
        int keliling = (2 * panjang) + (2 * lebar);
        printf("Keliling = %d", keliling);
    }
    else if (jenis == 'd')
    {
        float diagonal = sqrt((panjang * panjang) + (lebar * lebar));
        printf("Diagonal = %f", diagonal);
    }

    return 0;
}