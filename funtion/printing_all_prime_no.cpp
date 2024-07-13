#include<iostream>
using namespace std;
void printPrimeNo(int n){
    for(int j=1;j<n-1;j++){
        
        for(int i=1;i<j-1;i++){
                if(j%i==0){
                cout<<j<<" is not prime"<<endl;
                break;
            }
            else{
                cout<<j<<"is prime no"<<endl;
                break;

            }
        }
       
    }

}
int main(){
    int n;
    cout<<"enter the value of n :";
    cin>>n;
    printPrimeNo(n);
    return 0;
}