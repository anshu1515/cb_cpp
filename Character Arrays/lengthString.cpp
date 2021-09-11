#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int length(char *a){
	int i;
	for(i=0; a[i]!='\0'; i++){

	}
	return i;
}

int main(){
	
	char a[1000];
	cin.getline(a,1000);

	int ans=length(a);
	cout<<"length of array is: "<<ans<<endl;

	//inbuilt function to find length in char arrays
	cout<<"inbuilt function: "<<strlen(a)<<endl;

	return 0;
}