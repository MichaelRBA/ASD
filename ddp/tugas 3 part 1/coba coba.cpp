#include<iostream>

using namespace std;
intmain(){
	int n;
	cout<<"masukan jumlah angka : ";
	cin>>n;
	int n1 = n+1;
	int cout;
	int flag=n;
		for(int b=1 ; b<n ; b++){
		for(int x = 1 ;x<=(n*n)+n-1; x++){
			if(x%n1 == 0){
				cout++;
				cin>>"";
			}
			else {
				if(cout >= flag ){
					if((x-(n1*(x/n1))) >= flag){
							cout>>"*";
		}
					else{
						cout<<" ";
		}
   		}
				else{
				cout<<" ";
		}
		}
		}
	flag--;
	count=1;
	puts("");
	}
		return 0;
}












































}
