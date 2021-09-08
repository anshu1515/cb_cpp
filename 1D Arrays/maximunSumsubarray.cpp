#include<iostream>
#include<climits>
using namespace std;
int main(){

	int n,i,j,k;
	cin>>n;
	int arr[10000];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	//print all the subarrays
	// int i,j,k;
	// for(i=0; i<n; i++){
	// 	for(j=i; j<n; j++){
	// 		for(k=i; k<=j; k++){
	// 			cout<<arr[k]<<" ";
	// 		}
	// 		cout<<endl;
	// 	}
	// }

	//maximum sum and max subarray
	int max_sum=INT_MIN;
	int wi,wj;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			int sum=0; 
			for(k=i; k<=j; k++){
				sum += arr[k];
			}
			if(max_sum < sum){
				max_sum=sum;
				wi=i;
				wj=j;
			}
			// cout<<sum<<endl;
		}
	}
	cout<<"Maximum Subarray: "<<endl;
	for(int i=wi; i<=wj; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Maximum sum subarray: "<<max_sum<<endl;


	//optimized way is finding cumulative sum
	
	int csum[10000]={0};
	for(int i=1; i<n; i++){
		csum[i] += csum[i-1] + arr[i];
	}

	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			int sum=0; 
			sum =csum[j] - csum[i-1];
			// for(k=i; k<=j; k++){
			// 	sum += arr[k];
			// }
			if(max_sum < sum){
				max_sum=sum;
				wi=i;
				wj=j;
			}
			// cout<<sum<<endl;
		}
	}
	cout<<"Maximum Subarray2: "<<endl;
	for(int i=wi; i<=wj; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Maximum sum subarray2: "<<max_sum<<endl;



	return 0;
}