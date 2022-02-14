//Michael Raphael Ben Ariyanto
#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{

  string x;

  cout << "program mengubah semua kata menjadi huruf kapital pada huruf bagian  terakhir." << endl;
  cout << "Tuliskan teks/kalimat yang akan diubah  : ";
  getline(cin >> ws, x);

  x[x.length() - 1] = toupper(x[x.length() - 1]);
  cout << x;

  return 0;
}
