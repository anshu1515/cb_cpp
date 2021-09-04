#include<iostream>
using namespace std;

// int reverse(int num){
// 	int rev=0;
// 	while(num != 0){
// 		rev= (rev*10)+(num %10);
// 		num /= 10;
// 	}
// 	return rev;
// }

void countDigitd(int num){
	// num=reverse(num);
	int sumEven=0,sumOdd=0,c=1;
	while(num != 0){
		if(c % 2 == 0){
			sumEven += num%10;
		}
		else
		sumOdd += num%10;
		num /= 10;
		c++;
	}
	
	cout<<sumOdd<<endl;
	cout<<sumEven<<endl;
	
}


int main() {
	int num;
	cin>>num;

	countDigitd(num);
	return 0;
}