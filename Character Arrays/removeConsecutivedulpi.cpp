#include<bits/stdc++.h>
#include<iostream>
#include <cstring> 
using namespace std;


int main(){
	
	char a[1000];
	cin.getline(a,1000);
	int len=strlen(a);
	int i=0,j=1;
	while(j < len){
		if(a[i] != a[j]){
			i++;
			a[i]=a[j];
		}
		j++;
	}
	a[i+1]='\0';
	cout<<a<<endl;
	

	return 0;
}