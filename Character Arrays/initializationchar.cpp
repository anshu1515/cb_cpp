#include<iostream>
using namespace std;
int main(){

	
	// char c[]="welcome to my coding area";
	// char c[100]="Hello world";

	//cin ignores white spaces
	char c[100];
	cin>>c;
	cout<<c<<endl;

	//using loops to iterate
	for(int i=0; c[i] != '\0'; i++){
		cout<<c[i]<<" ";
	}
	cout<<endl;


	

	return 0;
}