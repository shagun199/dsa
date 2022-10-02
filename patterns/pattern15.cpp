#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;
    char ch = 'A';
    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << ch << " ";
            col++;
        }
        ch++;
        cout << endl;
        row++;
    }
}

// A
// B B
// C C C
// D D D D