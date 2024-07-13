#include <iostream>
using namespace std;
void factorial(int n)
{
    int factorial = 1;
    while (n!=1)
    {
        factorial = factorial * n;
        n--;
       
    }
    cout<<"the factorial is: "<<factorial;
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    factorial(n);
    return 0;

}