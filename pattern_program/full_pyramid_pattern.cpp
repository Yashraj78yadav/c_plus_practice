#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enteer the value of n\n";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int column=0;column<n-row;column++){
            cout<<"  ";
        }
        
         for(int col1=0;col1<row+1;col1++){
            cout<<"*   ";
        }
        
        // else{
        //      for(int col1=0;col1<row+1;col1++){
        //     cout<<" *";
        // }
        // }
       
        cout<<endl;
    }
    return 0;
}