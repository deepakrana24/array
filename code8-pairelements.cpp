#include <iostream>
using namespace std;
int pair_elements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        cout << arr[i] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // cout << arr[i] << ' , ' << arr[j] << endl; check the answer it shows the abshrub answer
            cout << arr[i] << ',' << arr[j] << endl;
        }
        cout << endl;
    }
    return 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a) / sizeof(int);

    pair_elements(a, n);
    return 0;
}