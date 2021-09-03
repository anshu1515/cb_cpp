#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	cin>>num1>>num2;
	int lcm=1;
	int max=(num1>num2)?num1:num2;
	while(1){
		if(max % num1==0 && max % num2==0){
			lcm=max;
			break;
		}
		max++;
	}
	cout<<lcm<<endl;

	//another way of finding lcm

	// int hcf=1;
	// int min=(num1<num2)?num1:num2;
	// for(int i=1;i<=min;i++){
	// 	if(num1%i==0 && num2%i==0){
	// 		hcf=i;
	// 	}
	// }
	// lcm=num1*num2/hcf;
	// cout<<lcm<<endl;


	return 0;
}