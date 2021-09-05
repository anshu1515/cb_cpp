#include<iostream>
using namespace std;
int main() {
	string s;
	cin>>s;
	int i=0;
	for(; s[i] != '\0';i++ ){
		if(s[i] == '0'){
			s[i]='5';
		}
	}
	cout<<s<<endl;
	return 0;
}