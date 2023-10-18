#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    char ch;
    cout<<"Enter the value of n :";
    cin>>n;
    i=1;
    while(i<=n){
        j=1;
         
        while(j<=n){
             ch='A'+i-j;
            cout<<ch<<" ";
            j+=1;
        }
        cout<<endl;
        
        i+=1;
    }
}