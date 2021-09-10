#include<iostream>
using namespace std;
int main(){

	char ch='A';
	char *cptr=&ch;
	char a[]="abcde";
	cout<<a<<" "<<(int *)a<<endl;

	//fooling of compiler we use type casting
	cout<<&ch<<" "<<cptr<<endl;
	cout<<(int *)cptr<<endl;

	return 0;
}