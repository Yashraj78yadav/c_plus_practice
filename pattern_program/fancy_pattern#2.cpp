#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int num=1;
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            if(col==row){
                cout<<num<<" ";
                num++;
            }
            else{
                cout<<num<<" "<<"* "; 
                num++;
            }
        }
        cout<<endl;
    }
    int num1=num-n;
   for(int row=0;row<n;row++){
    int count=num1;
        for(int col1=0;col1<n-row;col1++){
            if(col1==n-row-1){
                cout<<count<<" ";
                count++;
            }
            else{
                cout<<count<<" "<<"* ";
                count++;
            }
        }
        num1=num1-(n-row-1);
        cout<<endl;

    }

}