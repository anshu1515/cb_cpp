#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n,i=0,last,sum=0;
	cin>>n;
	while(n != 0){
		last = n%10;
		sum += last *pow(2,i++);
		n /= 10;	
	}
	cout<<sum<<endl;
	return 0;
}