#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	for(int i=1; n1 != 0; i++){
		if((3*i+2) % n2 == 0){
			continue;
		}
		cout<<(3*i+2)<<endl;
		n1--;
	}
	return 0;
}