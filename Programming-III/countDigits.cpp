#include<iostream>
using namespace std;
int main() {
	int num,digit;
	cin>>num>>digit;
	int count=0;
	while(num != 0){
		int last;
		last = num %10;
		if(last == digit){
			count++;
		}
		num /=10;
	}
	cout<<count<<endl;
	return 0;
}