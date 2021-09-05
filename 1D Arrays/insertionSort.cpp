 #include<iostream>
using namespace std;
int main(){

	int n,i,j;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for( i=1; i<n; i++){
		int pickedElement=arr[i];
		for(j= i-1; j>=0 && arr[j]>pickedElement; j--){
			arr[j+1]=arr[j];
		}
		arr[j+1]=pickedElement;
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}