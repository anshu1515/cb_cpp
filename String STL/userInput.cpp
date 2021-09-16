#include<iostream>
#include<string>
using namespace std;
int main(){

	string s;
	// cin>>s;
	// getline(cin,s,'$');
	// cout<<s<<endl;

	//lexographically comparison
	string s1="world";
	string s2="hello";
	if(s1<s2){   
		cout<<"s1 is smaller than s2"<<endl;
	}
	else{
		cout<<"s2 is smaller than s1"<<endl;
	}

	cout<<s1.compare(s2)<<endl;   //retrun 0 when equal and >0 and <0
 
	return 0;
}