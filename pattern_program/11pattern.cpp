#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch =65;
    cout<<"Enter the value of n :";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
         
        while(j<=n){
             
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        cout<<endl;
        
        i+=1;
    }
}