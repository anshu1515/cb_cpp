#include<iostream>
using namespace std;

void towerofhanio(int n,char src,char helper,char dest){
	if(n==0){
		return;
	}
	//recursive case

	//1.step n-1 disks from src to helper
	towerofhanio(n-1,src,dest,helper);

	//2.move nth disk from src to dest
	cout<<"move disk "<<n<<" from "<<src<<" to "<<dest<<endl;

	//3.move n-1 disks from helper to dest
	towerofhanio(n-1,helper,src,dest);
}

int main(){
	int n;
	cin>>n;
	towerofhanio(n,'A','B','C');

	return 0;
}
