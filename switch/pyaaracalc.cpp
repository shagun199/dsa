#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter the numbers : ";
    cin >> a, b;
    cout << endl;

    char opr;
    cout << "Enter the Operation :";
    cin >> opr;

    switch (opr)
    {

    case '+':
        cout << "Addition is " << a + b << endl;
        break;

    case '-':
        cout << "Substraction is " << a - b << endl;
        break;

    case '*':
        cout << "Multiplcation is " << a * b << endl;
        break;

    case '/':
        cout << "Division is " << a / b << endl;
        break;

    case '%':
        cout << "Mod is " << a % b << endl;
        break;

    default:
        cout << "Invalid operation" << endl;
        }
}