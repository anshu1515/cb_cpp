#include<iostream>
#include<string>
using namespace std;
int main(){

	//initialization
	string s="hello";
	cout<<s<<endl;
	for(int i=0; i< s.length();i++){
		cout<<s[i]<<" ";
	}
	cout<<endl;

	//	IInd way
	string s2=s;
	cout<<s2<<endl;

	//IIIrd way
	char a[]="Hello";
	string s3(a);
	cout<<s3<<endl;

	//update the string
	s="I am doing coding";
	cout<<s<<endl;

	//concat strings
	string x="hello";
	string y="i love coding";
	x = x +" "+ y;
	cout<<x<<" "<<y<<endl;

	//find a particular word inside string
	s="I am doing coding";
	string word="coding";
	cout<<s<<" it gives index of: "<<s.find(word)<<endl;
	int index=s.find(word);

	//delete or erase the word
	s.erase(index,word.length());
	cout<<s<<endl;
 
	return 0;
}