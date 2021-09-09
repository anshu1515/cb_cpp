#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char ch;
	cin>>ch;
	if(ch >= 'A' && ch <= 'Z'){
		cout<<"U"<<endl;
	}
	else if(ch >= 'a' && ch <= 'z'){
		cout<<"L"<<endl;
	}
	else{
		cout<<"I"<<endl;
	}
	return 0;
}