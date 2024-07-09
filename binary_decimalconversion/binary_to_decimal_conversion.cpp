#include<iostream>
#include<cmath>
using namespace std;
// bitwise function that convert binary to decimal are
int BinaryToDecimal1(){
    int n;
    cout<<"Enter the number which you want to conver in decimal : ";
    cin>>n;
    int i=0;
    int decimalNo=0;
    while(n){
        int binary=n&1;
        decimalNo=binary*pow(2,i++)+decimalNo;
        n/=10;
    }
    return decimalNo;
}

// numeric function that convert binary to decimal are
int BinaryToDecimal(){
    int n;
    cout<<"Enter the number which you want to convert : ";
    cin>>n;
    int i=0;
    int decimalNo=0;
    while(n){
        int binary=n%10;
         decimalNo=binary*pow(2,i++)+decimalNo;
         n/=10;
    }
    return decimalNo;
}

int main(){

    // numeric function call of binary to decimal are
    int number=BinaryToDecimal1();
    cout<<"The decimal no is : "<<number;

    // bitwise function call of binary to decimal are
    int number1=BinaryToDecimal1();
    cout<<"The decimal no is : "<<number1;

    return 0;
}