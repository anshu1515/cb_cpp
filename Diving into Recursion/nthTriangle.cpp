#include<iostream>
using namespace std;
int nthTriangle(int n){
	if(n==1){
		return 1;
	}
	return n+nthTriangle(n-1);

}
int main() {

	int n;
	cin>>n;
	cout<<nthTriangle(n)<<endl;

	return 0;
}