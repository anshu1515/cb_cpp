#include<bits/stdc++.h>
#include<iostream>
#include <cstring> // header file for char and strings array functions
using namespace std;

int main(){
	
	int n;
	cin>>n;
	char a[1000];

	//cin.ignore();
	cin.get();  //ignores \n after taking the number n and ip moves forwards
	while(n != 0){
	   cin.getline(a,1000);
	   cout<<a<<endl; //it took only 2 strings 
	   n--;

	}

	//cin>>n and then loop 
	

	return 0;
}