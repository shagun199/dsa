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
        // spaces
        int spaces = 1;
        while (spaces < row)
        {
            cout << " ";
            spaces++;
        }

        // star
        int count = n - row + 1;
        while (count)
        {
            cout << "*";
            count--;
        }
        cout << endl;
        row++;
    }
}
// ****
//  ***
//   **
//    *