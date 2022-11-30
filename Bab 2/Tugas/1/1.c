#include <stdio.h>
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    float nilai[2][3];
    int baris, kolom;
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("Nilai [baris][kolom] ke-[%d][%d] = ", baris + 1, kolom + 1);
            scanf("%f", &nilai[baris][kolom]);
        }
    }
    printf("\nMatriks Nilai yang dimasukkan : \n\n");
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("%g ", nilai[baris][kolom]);
        }
        printf("\n");
    }
    printf("\n");
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
            {
                jml_nilai1 = jml_nilai1 + nilai[baris][kolom];
            }
        }
        else
        {
            for (kolom = 0; kolom < 3; kolom++)
            {
                jml_nilai2 = jml_nilai2 + nilai[baris][kolom];
            }
        }
    }
    rerata1 = jml_nilai1 / 3;
    rerata2 = jml_nilai2 / 3;
    printf("Rerata baris ke 1 = %g\n", rerata1);
    printf("Rerata baris ke 2 = %g\n", rerata2);
    printf("\n");
    for (kolom = 0; kolom < 3; kolom++)
    {
        if (kolom == 0)
        {
            for (baris = 0; baris < 2; baris++)
            {
                jml_nilaicol1 = jml_nilaicol1 + nilai[baris][kolom];
            }
        }
        else if (kolom == 1)
        {
            for (baris = 0; baris < 2; baris++)
            {
                jml_nilaicol2 = jml_nilaicol2 + nilai[baris][kolom];
            }
        }
        else
        {
            for (baris = 0; baris < 2; baris++)
            {
                jml_nilaicol3 = jml_nilaicol3 + nilai[baris][kolom];
            }
        }
    }
    reratacol1 = jml_nilaicol1 / 2;
    reratacol2 = jml_nilaicol2 / 2;
    reratacol3 = jml_nilaicol3 / 2;
    printf("Rerata kolom ke 1 = %g\n", reratacol1);
    printf("Rerata kolom ke 2 = %g\n", reratacol2);
    printf("Rerata kolom ke 3 = %g\n", reratacol3);
}