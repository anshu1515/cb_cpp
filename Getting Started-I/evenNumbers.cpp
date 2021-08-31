#include <iostream> 
using namespace std; 
int main(){
    int n;
    cin>>n;

    //Ist way

    // int i=2;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i+=2;
    // }

    //IInd way
    
    int i=1;
    while(i<=n){
        if(i%2 == 0){
            cout<<i<<" ";
        }
        i++;
    }
   return 0;
}