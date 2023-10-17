#include <iostream>
using namespace std;
int main(){
    int i,j,n,count;
    i=1,count=1;
    cout<<"Enter the no of n : ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<count<<" ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}