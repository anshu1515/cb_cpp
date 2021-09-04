#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int last,rev=0;
	while(n != 0){
		last = n % 10;
		rev = rev*10 + last;
		n /= 10;
	}
	cout<<rev<<endl;
	return 0;
}