#include <stdio.h>
long int faktorial(unsigned int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * faktorial(n - 1);
}
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    int n;
    long int hasil;
    printf("n = ");
    scanf("%d", &n);
    hasil = faktorial(n);
    printf("%d! = %ld", n, hasil);
    return 0;
}
