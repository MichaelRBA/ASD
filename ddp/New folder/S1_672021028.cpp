#include <iostream> 
#include <cctype> 
#include <cstring>

using namespace std;

int main(void)
{
   char teks[999], teks_new[999];
   
   cout << "Program Mengubah Semua Huruf Menjadi Kapital.";
   cout << "Tuliskan teks : "; cin >> teks;;

   for (int x=0; x<strlen(teks); x++) {
        teks_new[x] = toupper(teks[x]);      
   }

   cout << "Berubah menjadi : "<<teks_new;

   return 0;   
}
