#include<iostream>
using namespace std;

void increase(int n){
	//base case
	if(n == 0){
		return;
	}

	//recursive case
	increase(n-1);
	cout<<n<<" ";

}

void decrease(int n){
	//base case
	if(n == 0){
		return;
	}

	//recursive case
	cout<<n<<" ";
	decrease(n-1);

}

int main(){

	int n;
	cin>>n;
	increase(n);
	cout<<endl;
	decrease(n);

	return 0;
}