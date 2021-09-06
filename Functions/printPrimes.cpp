#include<iostream>
using namespace std;

void printPrimes(int num){
	int i,no;
	for(no=2; no<=num; no++){
		for(i=2; i<no; i++){
			if(no%i==0)
				break;
		}
		if(i==no){
			cout<<no<<" ";
		}
	}
}

int main(){

	int num;
	cin>>num;
	printPrimes(num);

	return 0;
}