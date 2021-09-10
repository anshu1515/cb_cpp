#include<iostream>
#include <cstring> 
using namespace std;

void longestKunique(char *a,int k){
	int freq[26]={0};
	int len= -1;
	int cnt=0,i=0;
	for(int j=0; a[j] !='\0'; j++){
		freq[a[j] -'a']++;
		if(freq[a[j] - 'a'] == 1){
			cnt++;
		}
		while(cnt>k){
			freq[a[i]-'a']--;
			if(freq[a[i] -'a'] == 0){
				cnt--;
			}
			i++;
		}
		if(cnt == k){
			len=max(len,j-i+1);
		}
	}
	cout<<"largest string with k: "<<k<<" unique is: "<<len<<endl;
}

int main(){

	char a[100];
	cin.getline(a,100);
	int k;
	cin>>k;

	//SLIDING WINDOW -->important topic
	longestKunique(a,k);
	

	return 0;
}