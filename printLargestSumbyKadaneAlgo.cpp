#include <iostream>
using namespace std;

int printLargestSum(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum = currentSum + arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{

    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << printLargestSum(arr, n) << endl;
}