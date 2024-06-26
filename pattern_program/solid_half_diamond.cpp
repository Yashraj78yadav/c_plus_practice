#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int row1=0;row1<n;row1++){
        for(int col2=0;col2<n-row1-1;col2++){
            cout<<"* ";
        }
        cout<<endl;
    }
} 