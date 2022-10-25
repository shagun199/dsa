#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    int array[size];

    cout << "Enter the elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }

    reverse(array, size);
    cout << "Reversed array" << endl;
    printArray(array, size);
}