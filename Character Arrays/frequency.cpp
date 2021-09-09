#include<iostream>
#include <cstring> 
using namespace std;

int main(){

	char a[100];
	int freq[26]={0};
	cin.getline(a,100);
	for(int i=0; a[i] != '\0'; i++){
		char ch=a[i];
		int index = ch-'a';
		freq[index]++;
	}

	for(int i=0; i<26; i++){
		if(freq[i] > 0){
			char x = i + 'a';
		    cout<<x<<"--> "<<freq[i]<<endl;
		}
	}

	return 0;
}