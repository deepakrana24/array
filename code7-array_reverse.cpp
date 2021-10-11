#include <iostream>
using namespace std;
// swap is the predefined function
int reverse_array(int arr[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        int mid = (s + e) / 2;
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}

int main()
{
    int a[] = {10, 20, 30, 40, 50, 69, 100, 300, 49, 303, 233, 333};
    int n = sizeof(a) / sizeof(int);
    cout << "Your default array is ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    reverse_array(a, n);
    cout << "your reversed array is ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    cout << endl;
    return 0;
}