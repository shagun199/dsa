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

        // numbers
        int col = row;
        while (col <= n)
        {
            cout << col;
            col++;
        }
        cout << endl;
        row++;
    }
}

// 1234
//  234
//   34
//    4