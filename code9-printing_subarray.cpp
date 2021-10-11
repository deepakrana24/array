#include <iostream>
using namespace std;

int print_subarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k < j; k++)
            {
                cout << k << ",";
            }
            cout << endl;
        }
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(int);
    print_subarray(a, n);
}