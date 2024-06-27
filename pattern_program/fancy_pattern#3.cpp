#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value f n :";
    cin>>n;
    for(int row=0;row<n;row++){
        int num=1;
        for(int col=0;col<row+1;col++){
            if(col==0){
                cout<<"* ";
            }
            else{
                cout<<num<<" ";
                num++;
              
            }
        }
        for(int col1=0;col1<row;col1++){
            if(col1==row-1){
                cout<<"* ";
            }
            else{
                cout<<num-2<<" ";
                num--;

            }
        }
        cout<<endl;
    }
    for(int row=0;row<n;row++){
        int num=1;
        for(int col2=0;col2<n-row-1;col2++){
            if(col2==0){
                cout<<"* ";
            }
            else{
                cout<<num<<" ";
                num++;
            }

        }
        for(int col3=0;col3<n-row-2;col3++){
            if(col3==n-row-3){
                cout<<"* ";
            }
            else{
                cout<<num-2<<" ";
                num--;
            }
        }
        cout<<endl;
    }
}