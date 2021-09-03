#include<iostream>
using namespace std;
int x=10;    //global scope
int main(){

	cout<<x<<endl;
	int a=10;
	int x=20;
	if(a>0){
		int x=10;   //local scope of x variable
		cout<<x<<endl;
		// cout<<::x<<endl;
	}
	//updating the value of global scope
	// ::x += 20;
	// cout<<::x<<endl;
	cout<<x<<endl;

	return 0;
}