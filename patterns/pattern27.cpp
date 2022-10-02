#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    int row = 1;
    int count = 1;
    while (row <= n)
    {
        // spaces
        int spaces = n - row;
        while (spaces)
        {
            cout << "  ";
            spaces--;
        }

        // numbers
        int col = 1;

        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}
//       1
//     2 3
//   4 5 6
// 7 8 9 10