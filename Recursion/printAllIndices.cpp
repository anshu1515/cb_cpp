#include<iostream>
using namespace std;

int out[100];
int k=0;
void allOccur(int *arr,int n,int j,int key){

	//base case
	if(j == n){
		return;
	}

	//recursive case
	if(arr[j] == key){
		cout<<j<<" ";
		out[k]=j;
		k++;
	}
	allOccur(arr,n,j+1,key);

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
	allOccur(arr,n,0,key);
	cout<<endl;
	for(int i=0; i<k; i++){
		cout<<out[i]<<" ";
	}
	
	return 0;
}