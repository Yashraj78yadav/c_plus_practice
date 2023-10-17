#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"enter the value of n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<(n-j+1)<<" ";
            j+=1;
        }
        cout<<endl;
        i+=1;
    }

}