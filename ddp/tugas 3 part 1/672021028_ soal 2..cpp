#include <iostream>

using namespace std;

int main (){


int a = 82;
	//masukan angka yang mau dimasukan	
	while(true){
	int b;
	cout<<"Masukan jawaban kamu: ";
	cin>>b;
	
			
			if(b < a){
				cout<<"jawaban kamu lebih kecil dari angkanya"<<endl;
			}

			else if (b>a){
				cout<<"jawaban kamu lebih besar dari angkanya"<<endl;
			}
			//jika tebakan benar maka akan selesai 
			else if(b==a){
				cout<<"Victory! mantap jawaban kamu sudah tepat! Angkanya adalah: "<<a<<endl;
				break;
			}
	}
	
	return 0;	



}
	
	
	
	
	
	
	
	
	
	
		
		
