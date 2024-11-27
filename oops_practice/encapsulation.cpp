#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
    // Attribute
    int id;
    string name;
    int age;
    int nos;

    // private attribute
    private:
    string gf;
    int no;

    // constructor
    Student(int id,string name,int age,int nos){
        cout<<this->name<<"constructor is called"<<endl;
        this->id=id;
        this->name=name;
        this->age=age;
        this->nos=nos;
    }

    // behaviour/method
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    void study(){
        cout<<this->name<<" is studying"<<endl;
    }

    // destructor
    ~Student(){
        cout<<this->name<<" destructor is called "<<endl;
    }

};

int main(){

}