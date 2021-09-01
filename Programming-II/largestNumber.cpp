#include <iostream>
#include <climits>  //header file to get the least value of bucket
using namespace std;
int main(){

	int n;
	cin>>n;
	int i=1,largest=INT_MIN,num;
	while(i<=n){
		cin>>num;
		if(num>largest){
			largest=num;
		}
		i+=1;
	}
	cout<<"Largest Number : "<<largest<<endl;


	return 0;
}