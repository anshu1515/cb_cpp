#include <iostream> 
using namespace std; 
int main(){
    int i=2,n;
    cin>>n;
    while(i<n){
        if(n%i==0){
            cout<<"Not a Prime Number"<<endl;
            break;
        }
        i+=1;   
    }
    if(i==n){
        cout<<"Prime Number"<<endl;
    }


   return 0;
}