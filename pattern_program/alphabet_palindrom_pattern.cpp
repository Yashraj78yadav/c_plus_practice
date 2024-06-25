#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    for(int row=0;row<n;row++){

        char alph='A';
        for(int col1=0;col1<row+1;col1++){
            cout<<alph<<" ";
            alph++;
        }
        alph=alph-2;
        for(int col2=0;col2<row;col2++){
                cout<<alph<<" ";
                alph--;
            }
        cout<<endl;
    }
}