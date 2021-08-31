#include <iostream> 
using namespace std; 
int main(){
    int n;
    cin>>n;
    int l,sum=0;
    while(n!=0){
        l = n%10;
        sum += l;
        n /= 10;
    }
    cout<<"Sum of Digits-"<<sum<<endl;
   return 0;
}