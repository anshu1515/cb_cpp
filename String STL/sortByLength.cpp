#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

bool compare(string x,string y){
	if(x.length() == y.length()){
		return x < y;
	}
	return x.length() > y.length();
}
int main(){

	int n;
	cin>>n;
	string s[100];
	cin.get();
	for (int i = 0; i < n; i++)
	{
		getline(cin,s[i]);
	}

	sort(s, s + n,compare);

	for (int i = 0; i < n; i++)
	{
		cout<<s[i]<<endl;
	}
	cout<<endl;
	return 0;
}