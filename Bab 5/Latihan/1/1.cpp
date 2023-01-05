#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;
typedef struct {
  char nim[10];
  char nama[50];
  float nilai;
} nilaiMatKul;
typedef struct {
  int first;
  int last;
  nilaiMatKul data[10];
} queue;
void createEmpty(queue *Q) {
  (*Q).first = -1;
  (*Q).last = -1;
}
int isEmpty(queue Q) {
  int hasil = 0;
  if (Q.first == -1) {
    hasil = 1;
  }
  return hasil;
}
int isFull(queue Q) {
  int hasil = 0;
  if (Q.last == 9) {
    hasil = 1;
  }
  return hasil;
}
void add(char nim[], char nama[], float nilai, queue *Q) {
  if (isEmpty(*Q) == 1) {
    (*Q).first = 0;
    (*Q).last = 0;
    strcpy((*Q).data[0].nim, nim);
    strcpy((*Q).data[0].nama, nama);
    (*Q).data[0].nilai = nilai;
  } else {
    if (isFull(*Q) != 1) {
      (*Q).last = (*Q).last + 1;
      strcpy((*Q).data[(*Q).last].nim, nim);
      strcpy((*Q).data[(*Q).last].nama, nama);
      (*Q).data[(*Q).last].nilai = nilai;
    } else {
      printf("queue penuh\n");
    }
  }
}
void del(queue *Q) {
  if ((*Q).last == 0) {
    (*Q).first == -1;
    (*Q).last == -1;
  } else {
    int i;
    for (i = ((*Q).first + 1); i <= (*Q).last; i++) {
      strcpy((*Q).data[i + 1].nim, (*Q).data[i].nim);
      strcpy((*Q).data[i + 1].nama, (*Q).data[i].nama);
      (*Q).data[i - 1].nilai = (*Q).data[i].nilai;
    }
    (*Q).last = (*Q).last - 1;
  }
}
void printfQueue(queue Q) {
  if (Q.first != -1) {
    printf("------isi queue-------\n");
    int i;
    for (i = Q.last; i >= Q.first; i--) {
      printf("elemen ke : %d\n", i);
      printf("nim : %s\n", Q.data[i].nim);
      printf("nama: %s\n", Q.data[i].nama);
      printf("nilai: %f\n", Q.data[i].nilai);
    }
    printf("---------------------\n");
  } else {
    printf("queue kosong\n");
  }
}
int main() {
  cout << "Nama: Royhan Abdurrohim\n";
  cout << "NIM: 32602200018\n\n";
  queue Q;
  createEmpty(&Q);
  printfQueue(Q);
  printf("-------------------------\n");
  add((char *)"13507701", (char *)"Rangga", 64.67, &Q);
  add((char *)"13507702", (char *)"Anggy", 75.11, &Q);
  add((char *)"13507703", (char *)"Intan", 84.63, &Q);
  printfQueue(Q);
  printf("-------------------------\n");
  del(&Q);
  del(&Q);
  printfQueue(Q);
  printf("-------------------------\n");
  return 0;
}
