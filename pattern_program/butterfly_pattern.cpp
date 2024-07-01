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
        for(int col1=0;col1<(2*n)-(2*row)-2;col1++){
            cout<<"  ";
        }
         for(int col2=0;col2<row+1;col2++){
            cout<<"* ";
        }
        cout<<endl;

    }
    for(int row1=0;row1<n;row1++){
        for(int col3=0;col3<n-row1-1;col3++){
            cout<<"* ";
        }
        for(int col4=0;col4<2*row1+2;col4++){
            cout<<"  ";
        }
        for(int col5=0;col5<n-row1-1;col5++){
            cout<<"* ";
        }
        cout<<endl;
    }
}