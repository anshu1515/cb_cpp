#include<iostream>
using namespace std;
void checkBit(int n,int i){
	int mask;
	mask = (1 << i);
	mask = (n & mask);
	if(mask > 0){
		cout<<"ith bit is: "<<"1"<<endl;
	}
	else{
		cout<<"ith bit is: "<<"0"<<endl;
	}
}
int setBit(int n,int i){
	int mask =(1<<i);
	n= (n| mask);
	return n;
}

int main(){

	int n;
	cin>>n;

	int i;
	cin>>i;
	checkBit(n,i);

	int m=setBit(n,i);
	cout<<m<<endl;

	return 0;
}