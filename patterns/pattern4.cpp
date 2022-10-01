#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = n;

    while (i > 0)
    {
        int j = n;
        while (j > 0)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i--;
    }
    return 0;
}