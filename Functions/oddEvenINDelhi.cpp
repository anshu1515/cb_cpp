#include<iostream>
using namespace std;

bool calculatesum(int num){
	int evenSum=0,oddSum=0;
	int last;
	while(num){
		last=num%10;
	    if(last %2 ==0){
		    evenSum += last;
	    }
	    else{
		    oddSum += last;
	    }
	    num /= 10;
	}

	if(evenSum % 4==0 || oddSum % 3 == 0){
		return true;
		
	}
	else{
		return false;
		
	}
}

int main() {
	int cases;
	cin>>cases;
	int num;
	while(cases){
		cin>>num;
		if(calculatesum(num)){
			cout<<"Yes"<<endl;

		}
		else cout<<"No"<<endl;
		cases--;
	}

	return 0;
}