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
        int spaces = n - row;
        while (spaces)
        {
            cout << " ";
            spaces--;
        }

        // star
        int col = 1;
        while (col <= row)
        {
            cout << row;
            col++;
        }

        cout << endl;
        row++;
    }
}
//    1
//   22
//  333
// 4444