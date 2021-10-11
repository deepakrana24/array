#include <iostream>
using namespace std;

int main()
{
    int a[100] = {1};

    // display
    int n;
    cout << "enter number of students" << endl;
    cin >> n;
    //input
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] * 2;
    };
    //
    cout << "output is ";
    for (int i = 0; i < 100; i++)
    {
        cout << a[i] << ",";
    };
    cout << endl;
    return 0;
}
