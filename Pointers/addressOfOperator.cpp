#include<iostream>
using namespace std;
int main(){

	int a=10;
	float b=34.47;
	char ch='A';
	// int arr[4]={1,2,3,4};
	cout<<a<<" "<<&a<<endl;
	cout<<b<<" "<<&b<<endl;

	//character address works differently

	// cout<<ch<<" "<<&ch<<endl;
	//it prints the value until null is not found 

	return 0;
}