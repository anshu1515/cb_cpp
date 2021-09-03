#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main() {
	int n,last,octal=0,i=1;
	cin>>n;
	while(n != 0 ){
		last = n % 8;
		octal += (last *i);
		n /= 8;
		i *= 10;
	}
	cout<<octal<<endl;
	return 0;
}