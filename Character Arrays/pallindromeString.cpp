#include<bits/stdc++.h>
#include<iostream>
#include <cstring> // header file for char and strings array functions
using namespace std;

int main(){
	
	char a[1000];
	cin.getline(a,1000);

	//inbuilt function to find length in char arrays
	int len=strlen(a); 
	int i=0,j=len-1;
	bool flag = true;
	while(i < j){
		if(a[i] != a[j]){
			flag = false;
		}
		i++;
		j--;
	}
	if(flag == true){
		cout<<"Pallindrone String"<<endl;
	}
	else{
		cout<<"not a pallindrone string"<<endl;
	}

	return 0;
}