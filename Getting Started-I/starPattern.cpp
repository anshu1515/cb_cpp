#include <iostream>
using namespace std;
int main(){

	int rows,cols,n;
	cin>>n;
	for(rows=1; rows<=n; rows++){
		for(cols=1; cols<=rows;cols++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}


	return 0;
}