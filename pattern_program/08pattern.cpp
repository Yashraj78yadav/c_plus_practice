#include<iostream>
using namespace std;
int main(){
    int i,j,n,count;
    i=1;
    cout<<"Enter the value of n :";
    cin>>n;
      count=2;
    while(i<=n){
        j=1;
        count-=1;
        while(j<=i){
            cout<<count<<"  ";
            count+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
    
}