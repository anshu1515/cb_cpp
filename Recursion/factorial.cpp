#include<iostream>
using namespace std;

int factoiral(int n){
	//base case
	if(n==0){
		return 1;
	}

	//recursive case
	return n*factoiral(n-1);
}
int main(){

	int n;
	cin>>n;
	int ans = factoiral(n);
	cout<<"Factoiral of number is: "<<ans<<endl;

	return 0;
}