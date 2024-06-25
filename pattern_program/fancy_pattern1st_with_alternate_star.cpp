#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col1=0;col1<row+1;col1++){
            if(col1!=row){
                  cout<<row+1;
                  cout<<"*";
            }
            else{
                cout<<row+1;
            }
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++){
        for(int col1=0;col1<n-row;col1++){
            if(col1!=n-row-1){
                  cout<<n-row;
                  cout<<"*";
            }
            else{
                cout<<n-row;
            }
        }
        cout<<endl;
    }
}