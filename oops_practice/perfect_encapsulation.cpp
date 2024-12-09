#include<iostream>
#include<string>
using namespace std;

class student{
    private:
    // attribute
    int age;
    int id;
    string name;
    float gpa;

    public:
    // Usinhg setter and getter function
    void setage(){
        this->age;
    }
    int getage() const{
        return this->age;
    }
    int getid() const{
        return this->id;

    }

    // ctor: parameterised constructor
    student(int age ,int id,string name,float gpa){
        cout<<this->name<<" constructor called.."<<endl;
        this->age=age;
        this->id=id;
        this->name=name;
        this->gpa=gpa;
    }

    // methods
    void sleep(){
        cout<<this->name<<" is sleeping"<<endl;
    }
    void study(){
        cout<<this->name<<" is studying"<<this->id<<" in a day"<<endl;
    }

    // destructor
    ~student(){
        cout<<this->name<<" destructor called"<<endl;
    }
    private:
    void gpachaatting(){
        cout<<this->name<<" is chatting with   their gf"<<endl;
    }


};

int main(){
    student A(40,6,"yash",8.2);
    A.getage();
    A.getid();
    return 0;
}