#include <iostream>
using namespace std;

void update(int &a){
	a += 1;
	cout<<"after updation: "<<a<<endl;
}
 
int main(){
	int x=1;
	cout<<"before updation: "<<x<<endl;
	update(x);
	cout<<"after function updating: "<<x;
    

	return 0;
}