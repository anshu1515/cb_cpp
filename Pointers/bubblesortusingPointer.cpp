#include<iostream>
using namespace std;
void bubbleSort(int *a,int n){
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(*(a+j) > *(a+j+1)){
				swap(*(a+j),*(a+j+1));
			}
		}
	}
}

int main(){

	int n;
	cin>>n;
	int arr[1000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	bubbleSort(arr,n);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}