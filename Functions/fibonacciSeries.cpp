#include<iostream>
using namespace std;

int fibonacci(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		return 1;
	}
	else{
		int a=0,b=1,sum=0;
		for(int i=1;i<=n-2;i++){
		    sum=a+b;
		    a=b;
		    b=sum;
		}
		 return sum;	

	}

}

int main(){
	int n;
	cin>>n;
	cout<<fibonacci(n)<<" ";

	return 0;
}