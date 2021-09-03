#include <iostream>
#include <climits>  //header file to get the least value of bucket
using namespace std;
int main(){

	int i,n,no;
	cin>>n;
	for(no=2; no<=n; no++){
		for(i=2; i<no; i++){
			if(no%i == 0)
				break;
		}
		if(i==no){
			cout<<i<<" ";
		}
	}

	return 0;
}