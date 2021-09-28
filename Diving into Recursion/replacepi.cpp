#include<iostream>
using namespace std;

string replacepi(string str){
	//base case--> when str.size()
	if(str.length()<=1){
		return str;
	}
	if(str.substr(0,2)=="pi"){
	   return "3.14"+replacepi(str.substr(2));	
	}
	return str[0]+replacepi(str.substr(1));
}

int main() {
	string str;
	cin>>str;
	cout<<replacepi(str);

	return 0;
}