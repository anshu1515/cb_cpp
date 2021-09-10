#include<iostream>
using namespace std;
void update(int *a){
	*a = *a + 1;
	cout<<"inside function: "<<*a<<endl;

}
int main(){

	int x=10;
	update(&x);
	cout<<"inside main: "<<x;
	return 0;
}