#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int column=0;column<n-row;column++){
            cout<<column+1;

        }
        cout<<endl;
    }
    return 0;
}