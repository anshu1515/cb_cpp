#include<iostream>
using namespace std;

int main(){

	int a=7,b=5;
	//AND 
	cout<<(a&b)<<endl;
	cout<<(8&5)<<endl;

    //OR
	cout<<(7|5)<<endl;
	cout<<(14|2)<<endl;
    
    //XOR
    cout<<(7^5)<<endl;
	cout<<(14^1)<<endl;

	//LEFT SHIFT  a=a<<b;  a=a*2^b;
	int x=1;
	cout<<"left shift: "<<(x<<2)<<endl;

	//RIGHT SHIFT  a=a>>b;  a=a/2^b;
	int y=8;
	cout<<"right shift: "<<(y>>2)<<endl;

	//Negate 
	int c=-7;
	cout<<"Negated: "<<(~c);

	cout<<(5 & 7)<<endl;  //5
	cout<<(5 | 7)<<endl;  //7
	cout<<(5 ^ 7)<<endl;  //2
	cout<<(5 ^ 10)<<endl;  //15

	return 0;
}