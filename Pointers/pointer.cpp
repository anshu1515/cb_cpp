#include<iostream>
using namespace std;
int main(){

	//pointer is used to store the address the bucket
	int a=10;
	int *aptr=&a;

	cout<<aptr<<" "<<&a<<endl;  //same value of address

	float f=34.66;
	float *fptr= &f;
	cout<<&f<<" "<<fptr<<endl;

	return 0;
}