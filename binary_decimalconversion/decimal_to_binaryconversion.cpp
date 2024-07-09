#include<iostream>
#include<cmath>
using namespace std;

// bitwise function of decimal to binary conversion are
int decimalTOBinary1(){
    int n;
    cout<<"Enter the number which you want to convert in binary: ";
    cin>>n;
    int bit=0;
    int i=0;
    while(n>0){
        int binaryNo=n&1;
        bit=binaryNo*pow(10,i++)+bit;
        n=n>>1;
    }
    return bit;
}

// numeric function of decimal to binary conversion are
int decimalTOBinary(){
     int n;
    cout<<"Enter the number which you want to convert : ";
    cin>>n;
    int bit=0;
    int i=0;
    while(n>0){
        int binaryno=n%2;
        bit=binaryno*pow(10,i++)+bit;
        n/=2;
    }
    return bit;
}
int main(){
    // by using bit wise operator the decimal to binary conversion are 

    int number=decimalTOBinary1();
     cout<<"The binary no is :"<<number<<endl;

    //  by using the numeric system the decimal to binary conversion are 

    int number1=decimalTOBinary();
    cout<<"The binary no is :"<<number1;

    return 0;

}