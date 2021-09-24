#include<iostream>
using namespace std;

int getNumber(string str,int n){
	if(n==0)
		return 0;
	int digit=str[n-1]-'0';
	return getNumber(str,n-1)*10+digit;
}
int main() {
	string str;
	cin>>str;
	cout<<getNumber(str,str.length());
	return 0;
}