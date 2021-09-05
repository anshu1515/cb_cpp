#include<iostream>
using namespace std;


// void bubbleSort(int a[], int n, bool(&mycompare)(int a,int b)){
// for(int i=0; i<n-1; i++){
// 		int count=0;
// 		for(int j=0; j<n-1-i; j++){
// 			if(mycompare(a[j],a[j+1])){
// 				swap(arr[j],arr[j+1]);
// 				count++;
// 			}
// 		}
// 		if(count == 0)
// 			break;
// 	}	
// }
// bool compare(int a,int b){
// 	return a < b;
// }

int main(){

	int n;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	// sort(arr,arr+n,compare);

	//bubbleSort(arr,n,compare);
	for(int i=0; i<n-1; i++){
		int count=0;
		for(int j=0; j<n-1-i; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j],arr[j+1]);
				count++;
			}
		}
		if(count == 0)
			break;
	}
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}