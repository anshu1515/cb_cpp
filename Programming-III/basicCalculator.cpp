#include<iostream>
using namespace std;
int main() {
	int num1,num2;
	char ch;
	cin>>ch;
	while(ch != 'x' && ch != 'X'){
		if(ch == '+'){
			cin>>num1>>num2;
			cout<<(num1+num2)<<endl;
		}
		else if(ch == '-'){
			cin>>num1>>num2;
			cout<<(num1-num2)<<endl;
		}
		else if(ch == '*'){
			cin>>num1>>num2;
			cout<<(num1*num2)<<endl;
		}
		else if(ch == '/'){
			cin>>num1>>num2;
			cout<<(num1/num2)<<endl;
		}
		else if(ch == '%'){
			cin>>num1>>num2;
			cout<<(num1%num2)<<endl;
		}
		else{
			cout<<"Invalid operation. Try again."<<endl;
		}
		cin>>ch;
	}
	return 0;
}