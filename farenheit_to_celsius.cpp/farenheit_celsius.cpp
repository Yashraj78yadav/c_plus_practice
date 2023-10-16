#include <iostream>
using namespace std;
int main(){
    float f,c;
    cout<<"Enter the value of celsius : ";
    cin>>c;
    cout<<"Enter the value of farenheit : ";
    cin>>f;
    float t=(1.8*c)+32;
    cout<<"the conversion of celsius to farenheit are :"<<t<<endl;
    float x=((f-32)*(0.555));
    cout<<"the conversion of farenheit to celsius are : "<<x;

}