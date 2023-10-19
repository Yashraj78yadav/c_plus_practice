#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"Enter the value of n:";
    cin>>n;
    while(i<=n){
        j=1;
        int s=n-i;
        while(j<=i){
            cout<<s<<" ";
            s+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}