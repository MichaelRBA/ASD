#include <sstream>
#include <iostream> 
#include <conio.h> 
#include <string.h>
using namespace std;

int main()
{
   int x;
   char y[999];
   
   cout << "Program Mengubah String Menjadi sebuah Angka."<<endl;
   cout << "Tuliskan Kalimat : "; 
   cin.getline(y,sizeof(y));  
for(x=0;x<strlen(y);x++)
{
 if(y[x]=='a'||y[x]=='A') 
 cout << "1 "; 

 if(y[x]=='b'||y[x]=='B') 
 cout << "2 "; 
 
 if(y[x]=='c'||y[x]=='C') 
 cout << "3 "; 
 
 if(y[x]=='d'||y[x]=='D') 
 cout << "4 "; 

 if(y[x]=='e'||y[x]=='E') 
 cout << "5 "; 
 
 if(y[x]=='f'||y[x]=='F') 
 cout << "6 ";
 
 if(y[x]=='g'||y[x]=='G') 
 cout << "7 "; 

 if(y[x]=='h'||y[x]=='H') 
 cout << "8 "; 
 
 if(y[x]=='i'||y[x]=='I') 
 cout << "9 ";
 
 if(y[x]=='j'||y[x]=='J') 
 cout << "10 "; 

 if(y[x]=='k'||y[x]=='K') 
 cout << "11 "; 

 if(y[x]=='l'||y[x]=='L') 
 cout << "12 ";
 
 if(y[x]=='m'||y[x]=='M') 
 cout << "13 "; 

 if(y[x]=='n'||y[x]=='N') 
 cout << "14 ";
 
 if(y[x]=='o'||y[x]=='O') 
 cout << "15 ";
 
 if(y[x]=='p'||y[x]=='P') 
 cout << "16 "; 

 if(y[x]=='q'||y[x]=='Q') 
 cout << "17 "; 
 
 if(y[x]=='r'||y[x]=='R') 
 cout << "18 ";
 
 if(y[x]=='s'||y[x]=='S') 
 cout << "19 "; 

 if(y[x]=='t'||y[x]=='T') 
 cout << "20 "; 
 
 if(y[x]=='u'||y[x]=='U') 
 cout << "21 ";
 
 if(y[x]=='v'||y[x]=='V') 
 cout << "22 "; 

 if(y[x]=='w'||y[x]=='W') 
 cout << "23 "; 
 
 if(y[x]=='x'||y[x]=='X') 
 cout << "24 ";
 
 if(y[x]=='y'||y[x]=='Y') 
 cout << "25 "; 

 if(y[x]=='z'||y[x]=='Z') 
 cout << "26 ";  
} 
getch();
return 0;
}
