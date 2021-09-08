#include <iostream>
#include<climits>
using namespace std;
int main(){

	int n;
	cin>>n;
	int arr[10000];

	//pre-computation---> cumulative sum
	int max_sum=INT_MIN;
	int cumulativeSum=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		cumulativeSum += arr[i];
		if(cumulativeSum < 0){
			cumulativeSum =0;
		}
		max_sum=max(max_sum,cumulativeSum);
	}

	cout<<max_sum<<endl;

	return 0;
}