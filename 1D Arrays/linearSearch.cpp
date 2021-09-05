#include<iostream>
using namespace std;

int main(){

	int n;
	cin>>n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int target,i;
	cin>>target;
	for(i=0; i<n; i++){
		if(arr[i] == target){
			cout<<"key found at index: "<<i<<endl;
			break;
		}
	}
		if (i == n){
			cout<<"key is not found"<<endl;
		}

	return 0;
}