#include <stdio.h>
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    int l = 0, j = 0, k = 0;
    while (j <= 10)
    {
        k = j;
        while (k <= l)
        {
            printf("%i ", k);
            k++;
        }
        printf("\n");
        l += 2;
        j++;
    }
    return 0;
}