#include<iostream>
using namespace std;

int binarySearch(int *arr,int n,int key,int s,int e){
	int mid=(s+e)/2;
	//base case
	if(s > e){
		return -1;
	}
	

	//recursive case
	if(arr[mid] == key){
		return mid;
	}
	else if(arr[mid] < key){
		return binarySearch(arr,n,key,mid+1,e);
	}
	else{
		return binarySearch(arr,n,key,s,mid-1);
	}
	
}

int main(){
	
	int n;
	cin>>n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;

	int ans=binarySearch(arr,n,key,0,n-1);
	cout<<"key is present at: "<<ans<<endl;

	return 0;
}