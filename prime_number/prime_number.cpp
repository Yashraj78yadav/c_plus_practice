#include<iostream>
using namespace std;
int main(){
int n,prime;
cout<<"Enter the number of n :";
cin>>n;
prime=1;
for(int i=2;i<=(n-1);i++){
    if(n%i==0){
        prime=0;
        break;
    }
    
}
  if (prime==1)
    {
        cout<<n<<" is prime number";
    }
    else {
        cout<<n<<" is not prime number";
    }
}