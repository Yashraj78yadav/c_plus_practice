#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    // Attribute
    int id;
    int age;
    string name;
    int nos;

    // // constructor
    // Student(){
    //     cout<<this->name<<"constructor called "<<endl;
    // }

    // parameterised constructor
    Student(int id,int age,string name,int nos){
        cout<<this->name<<" parameterised constructor is called "<<endl;
        this->id=id;
        this->age=age;
        this->name=name;
        this->nos=nos;
    }

    // copy constructor
    Student(const Student &srcobj){
        cout<<"copy constructor called "<<endl;
        this->id= srcobj.id;
        this->age=srcobj.age;
        this->name=srcobj.name;
        this->nos=srcobj.nos;
    }

    // behaviour/function/method
    void sleep(){
        cout<<this->name<<" is sleeping "<<endl;
    }
    void study(){
        cout<<this->name<<" is studying "<<endl;
    }
    void bunk(){
        cout<<this->name<<" is bunk the class "<<endl;
    }

    // destructor
    ~Student(){
        cout<<this->name<<" destructor called"<<endl;
    }
};
int main(){
    // Student A;
    // A.name="yash";
    // A.id=1;
    // A.age=20;
    // A.nos=5;
    // A.sleep();
    // A.study();


    // Student A(1,23,"yash",5);
    // A.study();
    // cout<<A.name<<" "<<A.age<<" "<<endl;

    // Student C=A;
    // C.study();
    // cout<<C.name<<" "<<A.name<<" "<<endl;

    Student*A=new Student(2,20,"raj",6);
    cout<<A->name<<" "<<A->age<<" "<<endl;
    A->sleep();
    delete A;  // when dynamic object is created then we have to use delete to call destructor..

 
    return 0;
}