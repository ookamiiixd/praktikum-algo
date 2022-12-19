#include <stdio.h>
int data[10], data2[10];
int n;
void tukar(int a, int b)
{
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}
void Input()
{
    printf("Masukkan jumlah data = ");
    scanf("%d", &n);
    printf("--------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("Masukkan data ke-%d = ", (i + 1));
        scanf("%d", &data[i]);
        data2[i] = data[i];
    }
    printf("\n");
}
void Tampil()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}
void bubble_sort()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
                tukar(j, j - 1);
        }
        Tampil();
    }
    printf("\n");
}
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    printf("* Bubble Sort *\n");
    Input();
    printf("Proses Bubble Sort,,,,,,,\n");
    printf("--------------------------------------\n");
    Tampil();
    bubble_sort();
    printf("--------------------------------------\n");
}
