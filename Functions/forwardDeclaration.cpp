#include<iostream>
using namespace std;

//Forward declaration of function 

int mutliply(int a,int b);

int main(){

	int a,b;
	cin>>a>>b;
	int ans=mutliply(a,b);
	cout<<ans<<endl;

	return 0;
}

int mutliply(int a,int b){
	return a*b;
}