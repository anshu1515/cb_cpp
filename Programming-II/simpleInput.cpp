#include<iostream>
using namespace std;
int main() {
	int num,cs=0,i;
	while(i!=0){
		cin>>num;
		cs += num;
		if(cs<0){
			break;
		}
		cout<<num<<endl;
		i++;
	}
	return 0;
}