#include<iostream>
using namespace std;

int main(){

	int a=10;
	int &b=a;
	int &c=b;
	b++;
	c++;
	cout<<a<<" "<<b<<endl;
	c--;
	cout<<b<<" "<<c<<endl;
	return 0;
}