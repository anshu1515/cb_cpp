#include<iostream>
using namespace std;
int main(){

	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin>>arr[i][j];
		}
	}

	//wave print column-wise
	for(int j=0; j<col; j++){
		if(j % 2 == 0){
			//column is even
			for(int i=0; i<row; i++){
				cout<<arr[i][j]<<" ";
			}
			// cout<<endl;
		}
		else{
			//column is odd
			for(int i=row-1; i>=0; i--){
				cout<<arr[i][j]<<" ";
			}
			// cout<<endl;
		}
	}
	cout<<endl;

	//wave print row-wise
	for(int i=0; i<row; i++){
		if(i % 2 == 0){
			//row is even
			for(int j=0; j<col; j++){
				cout<<arr[i][j]<<" ";
			}
			// cout<<endl;
		}
		else{
			//row is odd
			for(int j=col-1; j>=0; j--){
				cout<<arr[i][j]<<" ";
			}
			// cout<<endl;
		}
	}
	cout<<endl;

	return 0;
}