#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    for(int row=0;row<n;row++){
        if(row==0||row==n-1){
            for(int column=0;column<2;column++){
                cout<<"  ";
            }
            cout<<"* ";
           for(int column=0;column<2;column++){
                cout<<"  ";
            } 
        }
        else if(row==1||row==n-2){
            for(int i=0;i<2;i++){
                cout<<"  ";
                for(int j=0;j<1;j++){
                    cout<<"* ";
                }
            }
            // cout<<"  ";
            
            // cout<<"  ";
           
        }
        else{
            cout<<"* ";
            for(int column=1;column<n-1;column++){
                cout<<"  ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}