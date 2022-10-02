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
        // for spaces
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        // for stars
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
}

//    *
//   **
//  ***
// ****