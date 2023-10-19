#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(i<=n){
        j=1;
        // char ch=('A'+i-1); 
        while(j<=i){
            char ch=('A'+i-1); 
            cout<<ch<<" ";
            ch+=1;
            j+=1;

        }
        cout<<endl;
        
        i+=1;
       
    }
}
