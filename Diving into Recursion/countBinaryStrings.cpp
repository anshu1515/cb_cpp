#include<iostream>
using namespace std;

int binarystring(int n,int last){

	if(n==0){
		return 0;
	}
	if(n==1){
		if(last ==0){
			return 2;
		}
		else
			return 1;
	}

	//recursive case
	if(last == 0){
		return binarystring(n-1,1)+binarystring(n-1,0);
	}
	else{
		return binarystring(n-1,0);
	}
}


int main() {

	int len;
	cin>>len;
	//no two consecutive ones-->00 01 10 not 11
	cout<<binarystring(len,0);

	return 0;
}
