#include<iostream>
using namespace std;

int waystogoparty(int n){
	if(n==0 || n==1){
		return 1;
	}
	//choose any person from all those left n-1 persons-->n-1(c)1
	return waystogoparty(n-1)+(n-1)*waystogoparty(n-2);
}

int main() {
	int n;
	cin>>n;
	cout<<waystogoparty(n);
	return 0;
}
