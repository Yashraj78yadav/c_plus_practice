#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the valuue of n :";
    cin>>n;
    for(int row=0;row<n;row++){
        int num=1;
        for(int col1=0;col1<n-row-1;col1++){
            cout<<" ";
        }
        for(int col2=0;col2<row+1;col2++){
            cout<<num;
            num++;
        }
        for(int col3=0;col3<row;col3++){
            cout<<num-2;
            num--;
        }
        cout<<endl;
    }
}
