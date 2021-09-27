#include<iostream>
using namespace std;

int Partition(int *arr,int s,int e){
	int i=s-1;
	for(int j=s; j<e; j++){
		if(arr[j]<=arr[e]){
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[e]);
	return i+1;  //pivot element only
}

void quicksort(int *arr,int s,int e){
	//base case
	if(s>=e){
		return;
	}

	//recursive case
	int index=Partition(arr,s,e);
	quicksort(arr,s,index-1);
	quicksort(arr,index+1,e);
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}

	quicksort(arr,0,n-1);

	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}