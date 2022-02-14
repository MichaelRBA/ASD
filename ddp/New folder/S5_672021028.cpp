#include <iostream>
using namespace std;

int main(){
    string kata;
    int a, b;
    bool palindrome = true;
 
    cout << "Program Cek Kata Kalimat Palindrom atau Bukan" << endl;

    cout << "Input Kata : ";
    getline(cin, kata);
    b = kata.length();

    for(b = 0; b < a; b++){
        if(kata[b] != kata[a-b-1])
        {
            palindrome = false;
            break;
        }
    }

    cout << "Result : ";
    if(palindrome == true)
        cout << "Palindrom";
    else
        cout << "Bukan Palindrom";

    cin.ignore();
    return 0;
}
