#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    i = 1;
    cout << "Enter the value of n: ";
    cin >> n;
    while (i <= n)
    {
        int space = (n - i + 1);
        while (space)
        {
            cout << "  ";
            space -= 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << j << " ";
            j += 1;
        }
        int end = i - 1;
        while (end)
        {
            cout << end << " ";
            end -= 1;
        }
        cout << endl;
        i += 1;
    }
}