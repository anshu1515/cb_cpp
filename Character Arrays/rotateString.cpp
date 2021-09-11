#include<bits/stdc++.h>
#include<iostream>
#include <cstring> 
using namespace std;

void rotateString(char *a,int n){
	//move charcater ahead by n
	int len=strlen(a);
	int i=len-1;
	while(i >= 0){
		a[i+n] = a[i];
		i--;
	}
	//copy value to start
	int j=len,k=0;
	while(k < n){
		a[k] = a[j];
		k++;
		j++;
	}
	a[len] = '\0';
	return;

}

int main(){

	int n;
	cin>>n;
	cin.ignore();
	char a[1000];
	cin.getline(a,1000);
	rotateString(a,n);
	cout<<a<<endl;

	return 0;
}