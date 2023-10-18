#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    i=1;
    char alpha;
    alpha=65;
    cout<<"Enter the number of n :";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<alpha<<" ";
            j+=1;

        }
        cout<<endl;
        alpha+=1;
        i+=1;
    }
}