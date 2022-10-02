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
        int lspaces = n - row;
        while (lspaces)
        {
            cout << "  ";
            lspaces--;
        }

        // numbers
        int col = 1;

        while (col <= row)
        {
            cout << col << " ";
            col++;
        }

        // rtriangle
        int rnumbers = row - 1;
        while (rnumbers)
        {
            cout << rnumbers << " ";
            rnumbers--;
        }
        cout << endl;
        row++;
    }
}

//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1