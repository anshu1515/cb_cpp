#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;

	int ans=(n & 1);
	if(ans == 1){
		cout<<"odd number"<<endl;
	}
	else{
		cout<<"even number"<<endl;
	}

	
	return 0;
}