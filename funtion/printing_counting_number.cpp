 #include<iostream>
 using namespace std;
 void printCount(){
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
 }
 int main(){
    cout<<"Printing the numberr from 1 to  n :"<<endl;
    printCount();
    return 0;

 }