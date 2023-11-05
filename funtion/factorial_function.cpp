#include<iostream>
using namespace std;
int fact(int n){
    int factorial;
  while(n!=1){
    factorial=factorial*n;
    n--;
    
  }
  cout<<factorial;
    return factorial;
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
   cout<< fact(n);
}
