#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0||row==n-1){
            for(int j=0;j<n+2;j++){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int j=0;j<n;j++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}