#include <iostream>
using namespace std;
long int fib(unsigned int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout << "Nama: Royhan Abdurrohim\n";
    cout << "NIM: 32602200018\n\n";
    int n;
    long int hasil;
    cout << "n = ";
    cin >> n;
    hasil = fib(n);
    cout << "fibonaci(" << n << ") = " << hasil;
    return 0;
}
