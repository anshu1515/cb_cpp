#include<iostream>
using namespace std;

void balancedParen(char *a,int n,int openc,int closec,int i){
	if(i == 2*n){
		a[i]='\0';
		cout<<a<<endl;
		return;
	}
	//recursive case
	if(openc<n){
		a[i]='(';
		balancedParen(a,n,openc+1,closec,i+1);
	}
	if(openc>closec){
		a[i]=')';
		balancedParen(a,n,openc,closec+1,i+1);
	}
}

int main() {
	int n;
	cin>>n;
	char a[100];
	balancedParen(a,n,0,0,0);

	return 0;
}
