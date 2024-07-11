#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter thevalue of n : ";
    cin>>n;
    for(int row=1;row<=n;row++){
        int num=1;
        for(int col=1;col<=row;col++){
            cout<<num<<" ";
            num=num*(row-col)/col;
        }
        cout<<endl;
    }
    return 0;
}