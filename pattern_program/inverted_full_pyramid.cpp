#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col1=0;col1<row;col1++){
            cout<<"  ";
        }
        for(int col2=0;col2<n-row;col2++){
            cout<<"*   ";
        }
        cout<<endl;
    }
    return 0;
}