#include <iostream>
using namespace std;
// binary search is the search which is APPLY ON SORTED ARRAY

// CONCEPT  LOOK FOR START , MIDDLE , END  .
//  SEARCH FOR THE KEY IN THE  EITHER OF TWO Parts  of the array after comparing the middle element .
// to run cpp program   control + option + N ;

/// SUMMARY OF THE Binary
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        int middle = (start + end) / 2;
        if (key == arr[middle])
        {
            return middle;
        }
        else if (key < arr[middle])
        {
            end = middle - 1;
            return middle;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}

int main()

{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(a) / sizeof(int);
    int key;
    cout << "n is " << n << endl;
    cout << "Enter the number , which you want to find  in the given array ..... " << endl;
    cin >> key;
    int found = binarySearch(a, n, key);
    if (found == -1)
    {
        cout << "  key is not found" << endl;
    }
    else

    {
        cout << " found key is " << found << endl;
    }
}

// all doubts clear here