#include<iostream>
using namespace std;
void starPattern(int n,int i){
	if(i==n+1){
		return;
	}

	for(int j=1; j<=i; j++){
		cout<<"*"<<"	";
	}
	cout<<endl;
	starPattern(n,i+1);
	
}

int main() {
	int n;
	cin>>n;
	starPattern(n,1);

	return 0;
}