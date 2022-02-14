//Michael Raphael Ben Ariyanto ( 672021028 ) 

#include <iostream>
#include <conio.h>
using namespace std;

void satuan (long x)
{
if (x==1) {
cout<<" Satu ";
}
else if (x==2) {
cout<<" Dua ";
}
else if (x==3) {
cout<<" Tiga ";
}
else if (x==4) {
cout<<" Empat ";
}
else if (x==5) {
cout<<" Lima ";
}
else if (x==6) {
cout<<" Enam ";
}
else if (x==7) {
cout<<" Tujuh ";
}
else if (x==8) {
cout<<" Delapan ";
}
else if (x==9) {
cout<<" Sembilan ";
}
else if (x==10) {
cout<<" Sepuluh ";
}
else if (x==11) {
cout<<" Sebelas ";
}
}
void memanggil (long y)
{
if (y<=11) {
satuan(y);
}
else if ((y>11) && (y<=19)) {
memanggil(y%10);
cout<<"Belas ";
}
	else if ((y>=20)&&(y<=99)) {
	memanggil(y/10);
	cout<<"Puluh";
	memanggil(y%10);
}
		else if ((y>=100)&&(y<=199)) {
		cout<<"Seratus";
		memanggil(y%100);
}
			else if ((y>=200)&&(y<=999)) {
			memanggil(y/100);
			cout<<"Ratus";
			memanggil(y%100);
}
				else if ((y>=1000)&&(y<=1999)) {
				cout<<"Seribu";
				memanggil(y%1000);
}
					else if ((y>=2000)&&(y<=10000)) {
					memanggil(y/1000);
					cout<<"Ribu";
					memanggil(y%1000);
}
		else{
		cout<<"maaf! angka yang anda masukan melebihi batas ";
}
}
	int main()
{
	int nilai;

cout<<"\nmasukan bilangan kamu :";cin>>nilai;
if (nilai<0){
cout<<"Minus ";
memanggil(nilai);
} else {
memanggil(nilai);
}
getch();// menggunakan getch karena digunakan untuk menahan (pause) output suatu program dan akan kembali mengeksekusi setelah kita melakukan inputan baik itu tombol enter atau tombol lainnya dan inputan tersebut tidak ditampilkan dalam window.
}
