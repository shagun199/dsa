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
        int col = 1;
        char ch = 'A';
        while (col <= n)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
}
// A B C D
// A B C D
// A B C D
// A B C D