#include <stdio.h>
void balik(char *str)
{
    if (*str)
    {
        balik(str + 1);
        printf("%c", *str);
    }
}
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    char a[100];
    printf("Masukkan bilangan yang ingin dibalik = ");
    scanf("%s", &a);
    printf("Hasil = ");
    balik(a);
}