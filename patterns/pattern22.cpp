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
            cout << row;
            count--;
        }
        cout << endl;
        row++;
    }
}
// 1111
//  222
//   33
//    4