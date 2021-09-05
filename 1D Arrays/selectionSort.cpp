#include<iostream>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++){
		int min=i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min=j;    //smallest value of all
			}
		}
		swap(arr[i],arr[min]);
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}