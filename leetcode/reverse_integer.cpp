#include<iostream>
using namespace std;
int main(){
    int n,ans;
    ans=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    while(n!=0){
        int digit = n%10;
        // cout<<ans<<endl;
        ans=(ans*10)+digit;
        n=n/10;
    }
    cout<<endl;
    cout<<"The reverse integer is: "<<ans;
}