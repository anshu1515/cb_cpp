#include<iostream>
using namespace std;

int profit(int n,int c,int *wgt,int *pri){
	if(n==0 || c==0){
		return 0;
	}
	//recursive case

	int ans=0;
	int inc, exc;
	inc=exc=0;

	//if i include item
	if(wgt[n-1]<=c){
		inc=pri[n-1] + profit(n-1,c-wgt[n-1],wgt,pri);
	}

	//if i not include the item
	exc=profit(n-1,c,wgt,pri);

	ans=max(inc,exc);
	return ans;
}

int main(){
	int weights[100];
	int prices[100];
	int n,c;
	cin>>n>>c;
	for(int i=0; i<n; i++){
		cin>>weights[i];
	}
	for(int i=0; i<n; i++){
		cin>>prices[i];
	}
	cout<<profit(n,c,weights,prices);

	return 0;
}
