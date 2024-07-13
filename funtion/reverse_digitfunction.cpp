#include<iostream>
using namespace std;
void reverseDigit(int n){
    int reverseDigit=0;
    int digit;
    while(n!=0){
        digit=n%10;
        reverseDigit=(reverseDigit*10)+digit;
        n=n/10;
    }
    cout<<"After reversing the original digit : "<<reverseDigit;
}
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    reverseDigit(n);
    return 0;

}
