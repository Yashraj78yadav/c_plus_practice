#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"Enter the value of n : ";
    cin>>n;
    i=1;
    while(i<=n){
        if(i%2==0){
            cout<<i<<"  is even"<<endl;
        }
        else{
            cout<<i<<" is odd"<<endl;
        }
        i+=1;
    }
   
}                                       