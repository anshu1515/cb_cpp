#include<iostream>
#include<cstring>
using namespace std;
int main() {
	char a[1000];
	cin.getline(a,1000);
	int freq[26]={0};
	for(int i=0; a[i] != '\0'; i++){
		char ch=a[i];
		int index=a[i]-'a';
		freq[index]++;
	}
	int max=0;
	char found;
	for(int i=0; i<26; i++){
		if(freq[i] > max){
			max=freq[i];
			found = i +'a';
		}
		
	}
	
	cout<<found<<endl;
	return 0;
}