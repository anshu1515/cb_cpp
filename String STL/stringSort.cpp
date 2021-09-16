#include <bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

bool compare(string x,string y){
	return x>y;
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
		cout<<s[i]<<" ";
	}
	cout<<endl;
	return 0;
}