#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int target;
	cin>>target;

	sort(arr,arr+n);

	//two pointer approach

	int start=0,end=n-1;
	while(start < end){
		if(arr[start] + arr[end] == target){
			cout<<arr[start]<<" "<<arr[end]<<endl;
			start++;
			end--;
		}
		else if (arr[start] + arr[end] > target){
			end--;
		}
		else
			start++;
	}

	return 0;
}