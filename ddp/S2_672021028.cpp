//Michael Raphael Ben Ariyanto (672021028)
#include<iostream>
#include<string>
using namespace std;

int main(){
	int z;
	cin>>z;
	int counterf=0;
	int counterb=0;
	string str1 ("Fizz");//menggunakan string 
	string str2 ("Buzz");
	string str3 ("FizzBuzz");
	for (int x=0; x<=z;x++){//for untuk pengulangan yang dilakukan secara tepat 
		string v;
		getline(cin,v);
			if(v.compare(str1) == 0){//kegunaan if untuk mencari kebenaran dari conditional expression
		 	counterf = counterf + 1;// menggunaklan counter karena akan mengulangi jika nilainya lebih besar dari 0
		} 		else if(v.compare(str2) == 0){//compare untuk membandingkan karakter di dalam string
				counterb = counterb + 1;
		} 			else if(v.compare(str3) == 0){//else if digunakan untuk penyeleksian dengan statement if, CPU akan memeriksa kebenaran dari conditional expression
					counterf = counterf + 1;
					counterb = counterb + 1;
		}
		}
		cout<< counterb<<" "<< counterf;
	}

