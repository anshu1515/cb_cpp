#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int findCount(int num){
	int count=0;
	// while(num){
	// 	count++;
	// 	num /=10;
	// }
	count= floor(log10(num)+1);
	return count;
}
int main() {
	long long int num;
	cin>>num;
	int count=findCount(num);
	int temp=num,sum=0;
	while(temp){
		int last=temp % 10;
		sum += pow(last,count);
		temp /=10;
	}
	if(num == sum){
		cout<<"true"<<endl;
	}
	else cout<<"false"<<endl;
	return 0;
}