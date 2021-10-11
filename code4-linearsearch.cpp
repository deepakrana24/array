#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 15, 12, 9, 6, 4, 3, 10, 8};
    int n = sizeof(arr) / sizeof(int);
    int key;

    cout << "enter the key " << endl;
    cin >> key;
    int index = linearSearch(arr, n, key);

    if (index != -1)
    {
        cout << key << " is present at index " << index << endl
             << n << endl;
    }
    else
    {
        cout << key << "is Not present " << n << endl;
    }
    return 0;
}