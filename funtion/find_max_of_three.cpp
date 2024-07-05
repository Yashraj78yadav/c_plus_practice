#include<iostream>
using namespace std;
int  findMax(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a && b>c){
        return b;
    }
    else{
        return c;
    }

}
int main(){
    int a,b,c;
    cout<<"Enter thhe value of a , b and c :";
    cin>>a>>b>>c;
    int maximum= findMax(a,b,c);
    cout<<"The maximum number among all of three is :"<<maximum;
    return 0;
}