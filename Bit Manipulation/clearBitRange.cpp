#include<iostream>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;
	int i,j;
	cin>>i>>j;

	// //for particular bit clear range
	// int mask = (~0);
	// mask= mask<<i;

	// n= (mask & n);
	// cout<<n<<endl;

	//for range of bits  --> [j,i)
	// int ma= (~0);
	// ma = ma<<j;

	// // int mb= pow(2,i) - 1;
	// int mb=(1<<i) -1;

	// int mask=(ma | mb);

	// n=(n & mask);
	// cout<<n<<endl;

	//update bits by some range

	//update m by shifting left
	m = m<<(i-1);

	//updated n is by clearing the bits
	int ma= (~0);
	ma = ma<<j;

	int mb=(1<<i-1) -1;

	int mask=(ma | mb);

	n=(n & mask);

    //final ans will be or of both update values
	n=(n | m);
	cout<<n<<endl;



	return 0;
}