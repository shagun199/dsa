#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    int i = 1;
    int count = 1;

    while (i <= n)
    {
        if (count % 3 != 0)
        {
            cout << i << " ";
            i++;
            count++;
        }
        else
        {
            cout << i << endl;
            i++;
            count++;
        }
    }
    return 0;
}

// 1 2 3
// 4 5 6
// 7 8 9

// alternate method
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the Number : ";
//     cin >> n;

//     int i = n;
//     int count = 1;

//     while (i <= n)
//     {
//         int j = n;
//         while (j <= n)
//         {
//             cout << count << " ";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
//     return 0;
// }