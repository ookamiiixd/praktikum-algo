#include <conio.h>
#include <iostream>
#define max 20
using namespace std;
void quickSort(int data[max], int l, int b) {
  int a;
  int up, down;
  int temp;
  if (l >= b)
    return;
  a = data[l];
  up = b;
  down = l;
  while (down < up) {
    while (data[down] <= a)
      down++;
    while (data[up] > a)
      up--;
    if (down < up) {
      temp = data[down];
      data[down] = data[up];
      data[up] = temp;
    }
  }
  data[l] = data[up];
  data[up] = a;
  quickSort(data, l, up - 1);
  quickSort(data, up + 1, b);
}
int main() {
  cout << "Nama: Royhan Abdurrohim\n";
  cout << "NIM: 32602200018\n\n";
  int data[max];
  int i, n, l, b;
  l = 0;
  cout << "Masukkan banyak data = ";
  cin >> n;
  b = n;
  for (i = 1; i <= n; i++) {
    cout << "Data ke-" << i << " : ";
    cin >> data[i];
  }
  quickSort(data, l, b);
  cout << "Hasil pengurutan data = ";
  for (i = 0; i < n; i++)
    cout << data[i] << " ";
}
