#include<iostream>
using namespace std;

//one of the fastest way to search in matrix
//given array should be sorted row or column wise 

int main(){

	int n,m;
	cin>>n>>m;
	int arr[100][100];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	int target;
	cin>>target;

	//Ist way--> iterate on every row and column
	//IInd way--> loop n every row and apply binary serach is better but ideal is
	//IIrd way--> stair case is best than others

	int i=0,j=m-1;
	bool iskeyPresent = false;
	while(i<n and j>=0){
		if(arr[i][j] == target){
			cout<<"key found at: "<<i<<","<<j<<endl;
			iskeyPresent = true;
			break;
		}
		else if(arr[i][j] > target){
			j--;
		}
		else
			i++;
	}
	if(iskeyPresent == false){
		cout<<"key is not present"<<endl;
	}



	return 0;
}