#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    cout<<"Enter the value of n :";
    cin>>n;
    while(i<=n){
        int space=n-i;
        while(space){
            cout<<"  ";
            space-=1;
        }
        j=1;
        char ch=('A'+n-i);
        while(j<=i){
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }

    cout<<endl;
    i+=1;
    }
    }