#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n\n ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col1=0;col1<(n-row-1);col1++){
            cout<<"  ";
        }
        for(int col2=0;col2<2*row+1;col2++){
            if(row==n-1||col2==0||col2==2*row){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;

}