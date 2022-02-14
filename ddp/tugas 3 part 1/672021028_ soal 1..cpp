#include <iostream>
using namespace std;

int main(){
	string opsi ;
	string warna ;
	int merah = 0;
	int hijau = 0;
	int merahhijau = 0;
	cout<<"Program Menghuitung warna Apel"<<endl;
	do{
		//masukan warna apel
		cout<<"Masukan warna apel: ";
		getline(cin , warna);

		if (warna == "merah"){
			merah ++;
			
		}
		else if (warna == "hijau"){
			hijau++;
			
		}
		else if (warna == "merah hijau"){
			 merahhijau++;
		}
		// pilih y  untuk lanjut dan pilih n untuk mengetahui hasil akhir
		cout<<"Masukan apel nya lagi (y/n)?: ";
		cin>>opsi;
		getchar();
	}while (opsi == "y");
		// mengetahui jumlah apel dan warna apel
	cout<<endl<<endl<<"Detail Jumlah Apel:"<<endl;
	cout<< "Merah: "<<merah<<endl;
	cout<< "Hijau: "<<hijau<<endl;
	cout<< "Merah hijau: "<<merahhijau<<endl;

	
	
	
	
	return 0;
}
