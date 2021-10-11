#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
            cout << mid << "arr[mid] > key" << endl;
        }
        else
        {
            s = mid + 1;
            cout << mid << "arr[mid] < key" << endl;
        }
    }
    return -1;
}

int main()
{ // 8
    int arr[] = {10, 20, 30, 40, 45, 60, 70};
    // 10
    // int arr[] = {10, 20, 30, 40, 45, 60, 70, 80, 90, 100};
    int n = sizeof(arr) / sizeof(int);

    int key;
    cout << "enter the key " << endl;
    cin >> key;
    cout << "n is " << n << endl;
    int index = binarySearch(arr, n, key);
    if (index != -1)
    {
        cout << key << "is present at " << index << endl;
    }
    else
    {
        cout << key << "is not present !!!!! " << endl;
    }
}