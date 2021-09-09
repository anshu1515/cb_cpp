#include<iostream>
using namespace std;
int main(){

	//without null character it prints till it reads the null character

	// char a[]={'A','N','S','H','U','\0'};
	char a[6]={'A','N','S','H','U','\0'};
	cout<<a<<endl;

	char b[10];
	b[0]='A';
	b[1]='b';
	b[2]='\0';
	cout<<b<<endl;

	//in double quotes null gets appended automatically in case of strings

	char c[]="welcome to my coding area";
	cout<<c<<endl;

	

	return 0;
}