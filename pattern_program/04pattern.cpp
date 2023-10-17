#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"Enter  the value of n :";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j+=1;

        }
        cout<<endl;
        i+=1;
    }
}