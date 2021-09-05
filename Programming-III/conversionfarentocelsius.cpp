#include<iostream>
using namespace std;
int main() {
	int min,max;
	cin>>min>>max;
	int step;
	cin>>step;
	for(int i=min; i<=max; ){
		int cel=(i-32)*5/9;
	    cout<<i<<" "<<cel<<endl;
	    i += step;
	}

	return 0;
}