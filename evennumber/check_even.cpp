#include<iostream>
using namespace std;
void EvenNoCheck(int n){
    if(n%2==0){
        cout<<"the no "<<n <<" is evennumber";
    }
    else{
        cout<<"The no "<<n<<" is not evennumber";
    }
}
int main(){
    int n;
    cout<<"Enter the number which you want to check : ";
    cin>>n;
    EvenNoCheck(n);
    return 0;

}