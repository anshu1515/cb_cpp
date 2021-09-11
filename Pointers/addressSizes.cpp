#include<iostream>
using namespace std;
int main(){

	//pointers occupy 4/8 bytes of memory space
	int a=10;
	int *aptr=&a;

	// cout<<aptr<<" "<<&a<<endl;  

	float f=34.66;
	float *fptr= &f;
	// cout<<&f<<" "<<fptr<<endl;

	char ch='A';
	char *cptr=&ch;

	//sizes of address
	cout<<sizeof(aptr)<<" ";
	cout<<sizeof(fptr)<<" ";
	cout<<sizeof(cptr)<<" ";

	return 0;
}