#include<iostream>
using namespace std;
int main() {
	int n,i,j;
	int n1=0,n2=1,sum=0;
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<n1<<" ";
			sum=n1+n2;
			n1=n2;
			n2=sum;

		}
		cout<<endl;
	}
	return 0;
}