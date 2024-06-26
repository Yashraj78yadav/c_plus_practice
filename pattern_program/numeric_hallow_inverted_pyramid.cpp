#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    for(int row=0;row<n;row++){
            int num=1;
        for(int col=0;col<n-row-1;col++){
            if(row==0||col==0||col==n-row-2){
                cout<<num;
                num++;
                
            }
            else{
                cout<<" ";
            }
           
        }
         cout<<endl;
    }
}