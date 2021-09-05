#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool compare(int a,int b){
	// cout<<a<<b<<endl;   //check the numbers comparison
	return a > b;     //descending order
	// return a<b;    //ascending order
}

int main(){

	int n,i,j;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

   //compare function is for ordering the numbers in ascending or descending order
	sort(arr, arr+n, compare);

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}