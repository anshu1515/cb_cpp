#include<iostream>
using namespace std;

int nstaircase(int n,int k){
	if(n<0){
		return 0;
	}
	if(n==0){
		return 1;
	}

	// return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
	
	int sum=0;
	for(int i=1; i<=k; i++){
		sum+=nstaircase(n-i,k);
	}
	return sum;

}

int main() {
	int n,k;
	cin>>n>>k;

	//-->Ist way
	// cout<<nstaircase(n);

	//-->IInd way advanced
	cout<<"No.of ways to reach: "<<nstaircase(n,k);

	return 0;
}
