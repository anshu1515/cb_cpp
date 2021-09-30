#include<iostream>
using namespace std;
int stringtointeger(string str,int l){
	if(l==0){
		return 0;
	}
	int digit=str[l-1]-'0';
	return stringtointeger(str,l-1)*10+digit;
}

int main() {
	
	string str;
	cin>>str;
	int n=str.length();
	int x=stringtointeger(str,n);
	cout<<x<<endl;
	cout<<x+1<<endl;

	return 0;
}