#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    char oper;
    cout<<"Enter the value of a :";
    cin>>a;
    cout<<endl<<"Enter the value of b :";
    cin>>b;
    cout<<endl<<"Enter the value of c :";
    cin>>c;
    cout<<endl<<"Enter your desired operator which you want to perform :";
    cin>>oper;
    switch(oper){
        case '+': cout<<"the sum is : "<<(a+b+c);
        break;
        case '-': cout<<"the subtraction is : "<<(a-b-c)<<endl;
        break;
        case '*': cout<<"The multiplication is : "<<(a*b*c)<<endl;
        break;
        case '/': cout<<"the division is : "<<(a/b/c)<<endl;
        break;
        // case '%': cout<<"The modulous is : "<<(a)%(b)<<endl;
        // break;
        default: cout<<"your input is wrong please try again";
    }
}