#include <iostream>
using namespace std;
int main(){

	int n,i=1;
	cin>>n;
	while( i<=n){
		
		if(i==8){
			i+=1;
			continue;
		}
		cout<<i<<" ";
		i+=1;
	}

	return 0;
}