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

    public:
    // constructor
    Student(int id,string name,int age,int nos,string gf,int no){
        cout<<this->name<<"constructor is called"<<endl;
        this->id=id;
        this->name=name;
        this->age=age;
        this->nos=nos;
        this->gf=gf;
        this->no=no;
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

    private:
    void gfchatting(){
        cout<<this->gf<<" is chatting with her boyfriend"<<endl;
    }

};

int main(){

Student A(1,"yash",21,4,"xyz",4);
A.sleep();
return 0;
}