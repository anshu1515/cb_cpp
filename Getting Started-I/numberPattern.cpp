#include <iostream>
using namespace std;
int main(){

	int rows,cols,n,no;
	cin>>n;
	for(rows=1; rows<=n; rows++){
		
		//print spaces i.e. n-rows spaces

		for(cols=1; cols<=n-rows; cols++){
			cout<<" ";
		}

		//print number in increasing order

		no=1;
		for(cols=1; cols<=2*rows-1; cols++){
			cout<<no<<" ";
			no+=1;
		}

		cout<<endl;
		
	}

	return 0;
}