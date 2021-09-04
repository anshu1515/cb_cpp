#include <iostream>
using namespace std;

int trailingZeroes(int num){
	int ans=0;
	for(int d=5; num/d>=1; d*=5){
		ans += num/d;
	}
	return ans;
}



int main(){
	int n;
	cin>>n;
	cout<<trailingZeroes(n)<<endl;
    

	return 0;
}