#include <stdio.h>

int main()
{
    int panjang;

    printf("Masukkan panjang sisi: ");
    scanf("%d", &panjang);

    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < panjang; j++)
        {
            if (i == 0 || i == panjang - 1 || j == 0 || j == panjang - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}