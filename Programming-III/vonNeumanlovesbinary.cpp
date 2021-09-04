#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int binarytodecimal(int binary){
	int last,decimal=0,i=0;
	while(binary != 0){
		last =binary %10;
		decimal += last * pow(2,i++);
		binary /= 10;
	}
	return decimal;
}
int main() {
	int n,binary;
	cin>>n;
	while(n != 0){
		cin>>binary;
		cout<<binarytodecimal(binary)<<endl;
		n--;
	}
	return 0;
}