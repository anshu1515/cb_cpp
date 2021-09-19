#include<iostream>
using namespace std;

bool issorted(int *arr,int n){

	////Ist way-->

	// //base case
	// if(n == 0 || n==1){
	// 	return true;
	// }
	
	// //recursive case
	// if(arr[0] <= arr[1] && issorted(arr+1,n-1)){
	// 	return true;
	// }
	// return false;


	
	// //	IInd way-->
	// //base case
	// if(i == n-1){
	// 	return true;
	// }

	// //recursive case

	// if(arr[i]<=arr[i+1] && issorted(arr,n,i+1)){
	// 	return true;
	// }
	// return false;


	//IIIrd way-->
	//base case
	if(n==1){
		return true;
	}


	//recursive case
	if(issorted(arr,n-1) && arr[n-1] >= arr[n-2]){
		return true;
	}
	return false;

}

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int i=0;
	// bool ans=issorted(arr,n);

	bool ans=issorted(arr,n);
	if(ans==true){
		cout<<"Sorted Array";
	}
	else{
		cout<<"Not Sorted Array";
	}

	return 0;
}