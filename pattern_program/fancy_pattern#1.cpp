#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enterthe value of n: ";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int col=0;col<n+2-row;col++){
            cout<<"* ";
        }
        int num=0;
        for(int col1=0;col1<row+1;col1++){
            cout<<row+1<<" "<<"* ";
        }
        for(int col2=0;col2<n+1-row;col2++){
            cout<<"* ";
        }
        cout<<endl;
    }
}