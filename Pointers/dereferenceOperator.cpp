#include<iostream>
using namespace std;
int main(){

	int x=10;
	int *y=&x;
	// cout<<"address is: "<<aptr<<endl;
	// cout<<"get the value we use derefernce operator: "<<*aptr<<endl;

	cout<<"address of x: "<<&x<<endl;
	cout<<"address of x bucket: "<<y<<endl;
	cout<<"address of its own bucket: "<<&y<<endl;
	cout<<"value of x: "<<*(&x)<<endl;
	cout<<"address of x: "<<&(*y)<<endl;
	cout<<"value of address plus 4: "<<&x + 1<<endl;
	cout<<"occupy 4 buckets space in x: "<<y+1<<endl;
	cout<<"value of 11: "<<*y + 1<<endl;
	cout<<"value of x address: "<<*(&y)<<endl;

	return 0;
}