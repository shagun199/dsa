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
        // first traingle
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col++;
        }

        // lstars
        int start = 1;
        while (start < row)
        {
            cout << "*"
                 << " ";
            start++;
        }

        // rstars
        int rstart = 1;
        while (rstart < row)
        {
            cout << "*"
                 << " ";
            rstart++;
        }

        // right numbers
        int rcol = n - row + 1;
        while (rcol)
        {
            cout << rcol << " ";

            rcol--;
        }
        cout << endl;
        row++;
    }
}
