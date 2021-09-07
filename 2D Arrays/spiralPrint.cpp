#include<iostream>
using namespace std;
int main(){

	int row,col,val=1;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			arr[i][j]=val;
			val++;
		}
	}

	int sr=0,er=row-1,sc=0,ec=col-1;
	while(sr<=er && sc<=ec){
		//print first row
		for(int j=sc; j<=ec; j++){
			cout<<arr[sr][j]<<" ";
		}
		sr++;

		//print last column
		for(int i=sr; i<=er; i++){
			cout<<arr[i][ec]<<" ";
		}
		ec--;

		//print last row
		if(sr<er){
		for(int j=ec; j>=sc; j--){
			cout<<arr[er][j]<<" ";
		}
		er--;	
		}

	
		//print first column
		if(sc<ec){
		for(int i=er; i>=sr; i--){
			cout<<arr[i][sc]<<" ";
		}
		sc++;	
		}
		
	}

	return 0;
}