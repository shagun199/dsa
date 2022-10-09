#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int p = 0;
    int ans = 0;

    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 1)
        {
            ans += pow(2, p);
        }
        n = n / 10;
        p++;
    }

    cout << ans << endl;
}