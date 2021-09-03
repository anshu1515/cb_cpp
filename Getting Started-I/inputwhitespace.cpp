#include<iostream>
using namespace std;

int main(){

	char ch;
	int count=0;
	// cin>>ch;  //ignores white spaces

	ch=cin.get();
	while(ch != '$'){
		count++;
		// cin>>ch;
		ch=cin.get();  //reads white spaces also
	}
	cout<<"Number of characters: "<<count<<endl;

	return 0;
}