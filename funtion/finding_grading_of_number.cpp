#include<iostream>
using namespace std;
int findGrade(int sum){
    if(sum>=90){
        cout<<"A";
    }
    else if(sum>=80){
        cout<<"B";
    }
    else if(sum>=70){
        cout<<"C";
    }
    else if(sum>=60){
        cout<<"D";
    }
    else if(sum>=50){
        cout<<"E";
    }
    return 0;
}
int main(){
int math,english,science,sst,hindi;
cout<<"Enter the marks of each subject math , english , science , sst and hindi respectively:";
cin>>math>>english>>science>>sst>>hindi;
int sum=(math+english+hindi+sst+science)/5;
cout<<"The grade of the student is : ";
cout<<findGrade(sum);
return 0;


}