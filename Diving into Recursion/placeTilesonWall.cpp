#include<iostream>
using namespace std;

int waystofilltitles(int n){
	//base case
	if(n<=3){
		return 1;
	}
	return waystofilltitles(n-1) + waystofilltitles(n-4);
}

int main() {

	int n;
	cin>>n;
	cout<<waystofilltitles(n);

	return 0;
}
