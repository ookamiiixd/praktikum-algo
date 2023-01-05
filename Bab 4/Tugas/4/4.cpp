#include <iostream>
#include <string>
using namespace std;
string balik(string str) {
  if (str.length() == 0)
    return "";
  else
    return balik(str.substr(1)) + str[0];
}
int main() {
  cout << "Nama: Royhan Abdurrohim\n";
  cout << "NIM: 32602200018\n\n";
  string str;
  cout << "Masukkan bilangan yang ingin dibalik = ";
  cin >> str;
  cout << "Hasil = " << balik(str) << endl;
}