#include<iostream>
using namespace std;

int power(int x,int y){
	//base case
	if(y == 0){
		return 1;
	}

	//recursive case
	return x*power(x,y-1);
}

int main(){
	
	int x,y;
	cin>>x>>y;
	int ans=power(x,y);
	cout<<ans<<endl;

	return 0;
}