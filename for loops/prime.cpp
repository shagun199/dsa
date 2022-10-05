#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    bool flag;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = true;
        }
    }
    if (flag)
    {
        cout << "Number is not a prime number" << endl;
    }
    else
    {
        cout << "Number is a prime number" << endl;
    }
}