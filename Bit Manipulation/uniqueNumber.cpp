#include<iostream>
using namespace std;

int main(){

	int n,num;
	cin>>n;
	int ans=0;
	for(int i=0; i<n; i++){
		cin>>num;
		ans ^= num;
	}
	cout<<"Unique Number: "<<ans<<endl;

	return 0;
}