#include <iostream>
using namespace std;

int printLargest(int arr[], int n)
{
    int largestSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sumOfSubarray = 0;
            for (int k = i; k <= j; k++)
            {
                sumOfSubarray += arr[k];
            }
            largestSum = max(sumOfSubarray, largestSum);
        }
    }
    return largestSum;
}

int main()
{
    // int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int arr[] = {1, -2, 3, 4, 4, -2};
    int n = sizeof(arr) / sizeof(int);
    cout << printLargest(arr, n) << endl;
    return 0;
}