#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    int num=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}