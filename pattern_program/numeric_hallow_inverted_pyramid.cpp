#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int row;
    for( row=0;row<n;row++){
            int num=row;
        for(int col=0;col<n-row-1;col++){
                num++;
            if(row==0||col==0||col==n-row-2){
                cout<<num<<" ";
                
            }
            else{
                cout<<"  ";
            }
           
        }
         cout<<endl;
    }
}