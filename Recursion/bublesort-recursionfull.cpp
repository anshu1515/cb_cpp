#include<iostream>
using namespace std;

void bubblesortrec(int *arr,int n,int i,int j){ //3
	// base case
	if(i==n-1){
		return;
	}

	//recursive case
	if(j==n-1-i){
		bubblesortrec(arr,n,i+1,0);//3
	}
	else{
		if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
			bubblesortrec(arr,n,i,j+1);
	}
}
int main(){

	int arr[100];
	int n;
	cin>>n; //5
	// array i/p
	for (int i = 0; i < n;i++)
	{
		cin>>arr[i];
	}

	// arr-->5 4 3 2 1
	cout<<"before sorting "<<endl;
	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	bubblesortrec(arr,n,0,0);

	cout<<"After sorting "<<endl;
	for (int i = 0; i < n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	return 0;
}