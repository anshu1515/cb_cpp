#include<iostream>
#include<math.h>
using namespace std;
int main() {
	long int a,b,c;
	cin>>a>>b>>c;
	int de=(b*b - 4*a*c);
	if(de > 0){
		int root1 = (-b + sqrt(de)) / 2*a;
		int root2 = (-b - sqrt(de)) / 2*a;
		cout<<"Real and Distinct"<<endl;
		cout<<root2<<" "<<root1;
	}
	else if(de == 0){
		int root = (-b) / 2*a;
		cout<<"Real and Equal"<<endl;
		cout<<root<<" "<<root;
	}
	else cout<<"Imaginary"<<endl;

	return 0;
}