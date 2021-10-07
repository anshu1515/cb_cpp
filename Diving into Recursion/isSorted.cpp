#include<iostream>
using namespace std;
bool isSortedArray(int *arr,int n,int i){
	if(i==n-1){
		return true;
	}
	if(arr[i]<=arr[i+1] && isSortedArray(arr,n,i+1)){
		return true;
	}
	return false;
}
int main() {

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	bool ans=isSortedArray(arr,n,0);
	if(ans==true){
		cout<<"true";
	}
	else
		cout<<"false";

	return 0;
}