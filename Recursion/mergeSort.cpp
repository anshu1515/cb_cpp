#include<iostream>
using namespace std;

void merging(int *arr,int l,int mid,int r){
	int brr[r-l+1];
	int i=l;
	int j=mid+1;
	int k=0;
	while(i<=mid && j<=r){
		if(arr[i]<=arr[j]){
			brr[k]=arr[i];
			k++;
			i++;
		}
		else{
			brr[k]=arr[j];
			k++;
			j++;
		}
			
	}
	while(i<=mid){
		brr[k]=arr[i];
			k++;
			i++;
	}
	while(j<=r){
		brr[k]=arr[j];
			k++;
			j++;
	}
	for(i=l;i<=r;i++){
		arr[i]=brr[i-l];
	}
}
void mergeSort(int *arr,int l,int r){
	if(l<r){
		int mid=l+(r-l)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,r);
		merging(arr,l,mid,r);
	}
}
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	mergeSort(arr,0,n-1);
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	return 0;
}