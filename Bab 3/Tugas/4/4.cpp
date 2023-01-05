#include <iostream>
using namespace std;
void bubbleSort() {
  int i, j, n, data[10], simpan, k, pilih;
  cout << "Mengurutkan Data\n";
  cout << "1. Ascending\n";
  cout << "2. Descending\n";
  cout << "Pilih salah satu = ";
  cin >> pilih;
  cout << "Masukkan banyak data = ";
  cin >> n;
  for (i = 1; i <= n; i++) {
    cout << "Data " << i << " = ";
    cin >> data[i];
  }
  cout << "Awal = ";
  for (i = 1; i <= n; i++)
    cout << data[i] << " ";
  cout << endl;
  if (pilih == 1) {
    for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
        if (data[j] > data[j + 1]) {
          simpan = data[j];
          data[j] = data[j + 1];
          data[j + 1] = simpan;
        }
      }
    }
    cout << "Hasil = ";
    for (i = 1; i <= n; i++)
      cout << data[i] << " ";
  } else {
    for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
        if (data[j] < data[j + 1]) {
          simpan = data[j];
          data[j] = data[j + 1];
          data[j + 1] = simpan;
        }
      }
    }
    cout << "Hasil = ";
    for (i = 1; i <= n; i++)
      cout << data[i] << " ";
  }
}
void insertionSort() {
  int banyakData, i, j;
  int pilih;
  cout << "Mengurutkan Data\n";
  cout << "1. Ascending\n";
  cout << "2. Descending\n";
  cout << "Pilih salah satu = ";
  cin >> pilih;
  cout << "Masukkan banyak data = ";
  cin >> banyakData;
  int data[banyakData];
  for (i = 0; i < banyakData; i++) {
    cout << "Data " << i + 1 << " = ";
    cin >> data[i];
  }
  if (pilih == 1) {
    for (i = 0; i < banyakData; i++) {
      for (j = i; j > 0 && data[j] < data[j - 1]; j--) {
        int temp = data[j - 1];
        data[j - 1] = data[j];
        data[j] = temp;
      }
    }
    cout << "Hasil pengurutan data = ";
    for (i = 0; i < banyakData; i++) {
      cout << data[i] << " ";
    }
    cout << "\n";
  } else {
    for (i = 0; i < banyakData; i++) {
      for (j = i; j > 0 && data[j] > data[j - 1]; j--) {
        int temp = data[j - 1];
        data[j - 1] = data[j];
        data[j] = temp;
      }
    }
    cout << "Hasil pengurutan data = ";
    for (i = 0; i < banyakData; i++) {
      cout << data[i] << " ";
    }
    cout << "\n";
  }
}
void selectionSort() {
  int n, tukar, A[100];
  int pilih;
  cout << "Mengurutkan Data\n";
  cout << "1. Ascending\n";
  cout << "2. Descending\n";
  cout << "Pilih salah satu = ";
  cin >> pilih;
  cout << "Masukkan jumlah data = ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Data ke-" << i + 1 << " = ";
    cin >> A[i];
  }
  if (pilih == 1) {
    for (int i = 0; i < n - 1; i++) {
      tukar = i;
      int temp;
      for (int j = i + 1; j < n; j++) {
        if (A[j] < A[tukar]) {
          tukar = j;
        }
      }
      temp = A[tukar];
      A[tukar] = A[i];
      A[i] = temp;
    }
    cout << "Hasil pengurutan data = ";
    for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
    }
    cin.get();
  } else {
    for (int i = 0; i < n - 1; i++) {
      tukar = i;
      int temp;
      for (int j = i + 1; j < n; j++) {
        if (A[j] > A[tukar]) {
          tukar = j;
        }
      }
      temp = A[tukar];
      A[tukar] = A[i];
      A[i] = temp;
    }
    cout << "Hasil pengurutan data = ";
    for (int i = 0; i < n; i++) {
      cout << A[i] << " ";
    }
    cin.get();
  }
}
int partition(int a[], int l, int u, bool asc = true) {
  int v, i, j, temp;
  v = a[l];
  i = l;
  j = u + 1;
  if (asc) {
    do {
      do
        i++;
      while (a[i] < v && i <= u);
      do
        j--;
      while (v < a[j]);
      if (i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    } while (i < j);
  } else {
    do {
      do
        i++;
      while (a[i] > v && i <= u);
      do
        j--;
      while (v > a[j]);
      if (i < j) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    } while (i < j);
  }
  a[l] = a[j];
  a[j] = v;
  return j;
}
void quickSort(int a[], int l, int u, bool asc = true) {
  int j;
  if (l < u) {
    j = partition(a, l, u, asc);
    quickSort(a, l, j - 1, asc);
    quickSort(a, j + 1, u, asc);
  }
}
void doQuickSort() {
  int a[50], n;
  int pilih;
  cout << "Mengurutkan Data\n";
  cout << "1. Ascending\n";
  cout << "2. Descending\n";
  cout << "Pilih salah satu = ";
  cin >> pilih;
  cout << "Masukkan jumlah data = ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Data ke-" << i + 1 << " = ";
    cin >> a[i];
  }
  quickSort(a, 0, n - 1, pilih == 1);
  cout << "Hasil sorting = ";
  for (int i = 0; i < n; i++)
    cout << a[i] << " ";
}
int main() {
  cout << "Nama: Royhan Abdurrohim\n";
  cout << "NIM: 32602200018\n\n";
  int pilih;
  cout << "Metode Sorting\n";
  cout << "1. Bubble Sort\n";
  cout << "2. Insertion Sort\n";
  cout << "3. Selection Sort\n";
  cout << "4. Quick Sort\n";
  cout << "Pilih salah satu = ";
  cin >> pilih;
  if (pilih == 1)
    bubbleSort();
  else if (pilih == 2)
    insertionSort();
  else if (pilih == 3)
    selectionSort();
  else
    doQuickSort();
  return 0;
}
