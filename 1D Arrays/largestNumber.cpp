#include<iostream>
#include<climits>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int max=INT_MIN;
	for(int i=0; i<n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	cout<<"Maximum Number: "<<max<<endl;

	return 0;
}