#include<iostream>
using namespace std;
void primeNo(int n){
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"it is not prime";
            break;
        }
        else{
            cout<<"it is prime no";
            break;
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    primeNo(n);
    return 0;


}