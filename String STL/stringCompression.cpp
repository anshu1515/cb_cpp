#include<iostream>
using namespace std;
int main() {
	string str;
	getline(cin,str);
	int len=str.length();
	for(int i=0;i<len;i++){
		int count=1;
		while(i<len-1 && str[i]==str[i+1]){
			count++;
			i++;
		}
		cout<<str[i]<<count;
	}
	return 0;
}