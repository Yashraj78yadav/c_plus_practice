#include<iostream>
using namespace std;
int main(){
    int n,rows,column;
    cout<<"Enter the value of n ."<<endl;
    cin>>n;
    for( rows=0;rows<n;rows++){
        for(column=0;column<n+2;column++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}