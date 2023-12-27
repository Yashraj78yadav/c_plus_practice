#include<iostream>
using namespace std;
int main(){
    int product,sum, n;
    cout<<"Enter the value of n :";
    cin>>n;
    product=1;
    sum=0;

    while(n!=0){
        int digit=n%10;
        product=product*digit;
        sum=sum+digit;
        n=n/10;
    }
    cout<<"The product is :" <<product<<endl;
    cout<<"The sum is :"<<sum;
}