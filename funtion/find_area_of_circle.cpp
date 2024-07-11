#include<iostream>
using namespace std;
void areaOfCircle(){
    float radius;
    cout<<"Enter the value of radius: ";
    cin>>radius;
    float area=3.14*(radius*radius);
     cout<<"The area of circle is : "<<area;
    

}
int main(){
   
    areaOfCircle();
    return 0;
}