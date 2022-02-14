#include<iostream> 
#include<conio.h>
#include<string.h>

using namespace std;

int main()
{
 int x,panjang,jml;
 char kalimat[100];
 cout<<"kalimat yang ingin dimasukan : ";
 cin.getline(kalimat,sizeof(kalimat));
 jml=0;
 
 for(x=0;x<strlen(kalimat);x++)
 {
 if(kalimat[x]=='a'||kalimat[x]=='i'||kalimat[x]=='u'||kalimat[x]=='e'||kalimat[x]=='o') 
 jml++;
 }
cout<<"jumlah huruf vokal ; "<<jml<<endl;
getch();
return 0;
}
