#include<iostream>
using namespace std;

void readLine(char c[], char delimiter = '\n'){
	int i=0;
	char ch=cin.get();
	while(ch != '\n'){
		c[i]=ch;
		i++;
		ch=cin.get();
	}
	c[i]='\0';
}
int main(){

	//cin ignores white spaces

	//user input of character array

	//cin.get()-->it will pick the character where input-pointer is pointing at and return it;
	//it does not care whether it is pointing at any digit or not
	// '/n is the delimiter to stop the execution'
	char c[100];

	// readLine(c,'$');  //\n or $ or any character

	// cout<<c<<endl;

	//inbuilt function
	//cin.getline()-->name of array, size of aray, delimiter by default is '\n'
	cin.getline(c,100 ,'$');
	cout<<c;

	
	return 0;
}