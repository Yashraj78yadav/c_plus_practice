#include<iostream>
using namespace std;
void printEvenNumber(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i+=2){
        cout<<i<<" ";
        sum=sum+i;
    }
    cout<<endl<<"The sum of all even number is: "<<sum;
    
}
int main(){
    cout<<"Printing even number and their sum:"<<endl;
    printEvenNumber();
    return 0;
}