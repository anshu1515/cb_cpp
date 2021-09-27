#include <iostream>
using namespace std;
string a[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
void integertoString(int n){
	//base case
	if(n==0){
		return;
	}

	//recursive case
	int lastDigit=n%10;
	integertoString(n/10);
	cout<<a[lastDigit]<<" ";


}
int main(){

	int n;
	cin>>n;
	integertoString(n);

	return 0;
}