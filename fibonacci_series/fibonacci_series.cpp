#include<iostream>
using namespace std;
int main(){
    int n,a,b;
    a=0,b=1;
    cout<<"Enter the value of n :";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
        int nextnumber=(a+b);
        cout<<nextnumber<<" ";
        a=b;
        b=nextnumber;
    }
}
