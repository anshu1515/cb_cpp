#include<iostream>
using namespace std;
void getresult(string str,string res,int i){
	if(i==str.length()){
		cout<<res;
		return;
	}
	if(str[i]!=str[i+1]){
		res=res+str[i];
	}
	getresult(str,res,i+1);
}
int main() {
	string str;
	cin>>str;
	getresult(str,"",0);
	return 0;
}