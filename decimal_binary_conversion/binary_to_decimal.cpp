#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,ans;
    i=0,ans=0;
    cout<<"Enter the value of n  :";
    cin>>n;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans*pow(2,i)+digit;
        }
        i++;
        n=n/10;
    }
    cout<<ans;
}