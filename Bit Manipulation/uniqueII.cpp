#include<iostream>
#include<algorithm>
using namespace std;

int main(){

	int n,no,ans=0;       
	cin>>n;
	int arr[1000000];

	//take xor of all inputs

	for (int i = 0; i <n; ++i)
	{
		cin>>arr[i];
		ans=ans^arr[i];

	}

	int temp=ans;
	//find the bit with unique bits
	int pos=0,fp; 

	while(temp>0){
		if((temp&1)>0){
			// uss position pe 1 hai
			fp=pos;
        	break;
		}
		else{
			pos++;
			temp=temp>>1;
		}
	}

	//we need to separate the numbers acc to bit position

	int mask=1<<fp;
	int res=0;

	for(int i=0;i<n;i++){
		if((arr[i]&mask)>0){ //2 7 2 3
			res=res^arr[i];//0^7=7
		}
	}
	// ans=4-->7^3
	int res2=ans^res;  //3

	cout<<min(res,res2)<<" "<<max(res,res2)<<endl;

	return 0;
}