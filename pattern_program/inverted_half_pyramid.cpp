#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int row=0;row<n;row++){
        for(int column=row;column<n;column++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}