#include <iostream>
using namespace std;

bool isFound(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int nums[10] = {64, 89, 4, 9, 49, 8, 4, 2, 11, 99};

    int find;

    cout << "Enter the element you want to search for :";
    cin >> find;

    int ans = isFound(nums, 10, find);

    if (ans)
    {
        cout << "Found ";
    }
    else
    {
        cout << "Not Found";
    }
}