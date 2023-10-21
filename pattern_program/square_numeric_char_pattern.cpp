#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"Enter the value of n: ";
    cin>>n;
    while(i<=n){
        j=1;
        int first=n-i;
        while(first){
            cout<<j<<" ";
            j+=1;
            first-=1;

        }
        int space=i-1;
        while(space){
            cout<<"*"<<" ";
            space-=1;
        }
        int end=i-1;
        while(end){
            cout<<"*"<<" ";
            end-=1;
        }
        int start=n-i;
        // int x=1;
        while(start ){
            cout<<start<<" ";
            start-=1;
        }
        cout<<endl; 
        i+=1;

    }

}