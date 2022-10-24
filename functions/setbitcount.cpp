#include <iostream>
using namespace std;
int countSetBits(int n)
{
    int count = 0;
    while (n)
    {
        count += n & 1;
        n = n >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cout << "Enter the numbers : ";
    cin >> a >> b;

    cout << "Number of set bits : " << countSetBits(a) + countSetBits(b);
    return 0;
}
