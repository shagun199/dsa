#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // int col = 1;
        int count = n - row + 1;
        while (count)
        {
            cout << "*";
            count--;
            // col++;
        }
        cout << endl;
        row++;
    }
}

// ****
// ***
// **
// *