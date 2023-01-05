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
void input()
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
void tampil()
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
}
void bubbleSort()
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            if (data[j] < data[j - 1])
                tukar(j, j - 1);
        }
        tampil();
    }
    printf("\n");
}
int main()
{
    printf("Nama: Royhan Abdurrohim\n");
    printf("NIM: 32602200018\n\n");
    printf("* Bubble Sort *\n");
    input();
    printf("Proses Bubble Sort,,,,,,,\n");
    printf("--------------------------------------\n");
    tampil();
    bubbleSort();
    printf("--------------------------------------\n");
}
