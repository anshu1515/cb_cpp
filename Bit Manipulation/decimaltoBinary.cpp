#include<bits/stdc++.h>
#include<iostream>
#include <cstring>
using namespace std;

int main(){

	int n;
	cin>>n;

	// //first way
	// int p=1,ans=0;
	// while(n > 0){
	// 	ans += (n % 2) * p;
	// 	p*=10;
	// 	n /= 2;
	// }
	// cout<<ans;

	// //2nd way using bits
	// int p=1,ans=0;
	// while(n > 0){
	// 	ans +=(n & 1)*p;
	// 	p*=10;
	// 	n = n>>1;
	// }
	// cout<<ans<<endl;

	//error for for stroing values till 32 bits not able to store even in long long int
	//here we use string or array

	string s;
	int p=1;
	while(n > 0){

		s.push_back('0' + n%2);
		n/=2;
	}
	reverse(s.begin(),s.end());
	cout<<s<<endl;



	return 0;
}