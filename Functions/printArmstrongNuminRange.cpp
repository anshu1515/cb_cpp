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
	int num1,num2;
	cin>>num1>>num2;
	for(int i= num1; i<=num2; i++){
	int count=findCount(i);
	int temp=i,sum=0;
	while(temp){
		int last=temp % 10;
		sum += pow(last,count);
		temp /=10;
	}
	if(i == sum){
		cout<<i<<endl;
	}
	}
	
	return 0;
}