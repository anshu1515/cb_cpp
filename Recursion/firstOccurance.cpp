#include<iostream>
using namespace std;

int firstOccur(int *arr,int n,int j,int key){

	//base case
	if(j == n){
		return -1;
	}

	//recursive case
	if(arr[j] == key){
		return j;
	}
	return firstOccur(arr,n,j+1,key);

}

int main(){

	int n,j;
	cin>>n;
	int arr[100];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int key;
	cin>>key;
	int index=firstOccur(arr,n,0,key);
	cout<<"index is at: "<<index;
	
	return 0;
}