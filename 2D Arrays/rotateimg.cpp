#include <iostream>
using namespace std;

//IInd way --> take transpose first and then reverse the columns or swap

void rotateImg(int arr[][100],int n){
	//reverse the rows first
	for(int i=0; i<n; i++){
		int x=0,y=n-1;
		while(x<y){
			swap(arr[i][x],arr[i][y]);
			x++;
			y--;
		}
	}
	//take transpose now
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i<j){
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
	//print array
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){

	int n;
	cin>>n;
	int arr[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>arr[i][j];
		}
	}

	rotateImg(arr,n);


	return 0;
}