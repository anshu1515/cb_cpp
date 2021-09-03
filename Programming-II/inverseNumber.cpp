#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long int num;
	cin>>num;
	int temp=num,reverse=0,i=1;
	while(temp){
		int last=temp%10;
		reverse += i*pow(10,last-1);
		temp /=10;
		i++;
	}
	cout<<reverse<<endl;

	return 0;
}
