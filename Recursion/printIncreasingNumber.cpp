#include<iostream>
using namespace std;

void increase(int n,int i){
	//base case
	if(i == n+1){
		return;
	}

	//recursive case
	cout<<i<<" ";
	increase(n, i+1);
}

int main(){

	int n;
	cin>>n;
	int i=1;
	increase(n,i);
	cout<<endl;

	return 0;
}