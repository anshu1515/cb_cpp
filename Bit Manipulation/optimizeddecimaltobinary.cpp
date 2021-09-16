#include<bits/stdc++.h>
#include<iostream>
#include <cstring>
using namespace std;

int main(){

	int n;
	cin>>n;

	//most optimized solution
	bool isfoundOne=false;
	int mask=(1 << 30);
	while(mask != 0){
		if((mask & n) == 0 && isfoundOne==false){
			mask= mask >> 1;
			continue;
		}
		else{
			isfoundOne=true;
			if((mask & n)>0){
				cout<<1;
			}
			else{
				cout<<0;
			}
			mask= mask>>1;
		}
	}
	


	return 0;
}