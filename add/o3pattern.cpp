#include <iostream>
using namespace std;
int main(){
    int i,j,n,count;
    i=1,count=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}