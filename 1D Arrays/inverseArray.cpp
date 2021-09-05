#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int inverse[n];
	for(int i=0; i<n; i++){
		int v=arr[i];
		inverse[v]= i;
		
	}
	for(int i=0; i<n; i++){
		cout<<inverse[i]<<" ";
	}
	return 0;
}