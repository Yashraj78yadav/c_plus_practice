#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,ans;
    i=0,ans=0;
    cout<<" Enter the value of n :";
    cin>>n;
    while(n!=0){
       int bit=(n & 1);
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
    }