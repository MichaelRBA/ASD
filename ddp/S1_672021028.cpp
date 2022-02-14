//Michael Raphael Ben Ariyanto (672021028)

#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int a;
	int x=100;
	cin>>a;
	cout<<endl;
	int j;
	for (int y=0; y<a;y++){
	int g;	
	cin>>g;
	if (abs(g) < abs(x) || abs(g) == abs(x) && g > x) {
      x = g;
    }	
	}
	if(x == 0){
		cout<< 0 <<endl;
	}
	else {
		cout<< x <<endl;
	}
}
