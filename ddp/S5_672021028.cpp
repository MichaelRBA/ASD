//Michael Raphael Ben Ariyanto (672021028)

#include <iostream>

using namespace std;

int main (){
	int poin;
	int i=5;//menggunakan interger karena menggunakan angka 
	int t=3;
	int r=2;
	cin>>poin;
	for (int q=0; q<=poin/2;q++){//for untuk pengulangan yang dilakukan secara tepat 
	for (int w=0; w<=poin/3;w++){
	for (int e=0; e<=poin/5;e++){
	if((q*r)+(w*t)+(e*r)==poin){
	cout<<e<<w<<q<<endl;
	}
	}
	}
	}
	}


