#include <iostream>
using namespace std;
void printArrry(int arry[])
{
    int n = sizeof(arry) / sizeof(int);
    cout << "in function    " << sizeof(arry) << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }
}
int main()
{
    int arry[] = {1, 2};
    int n = sizeof(arry) / sizeof(int);
    cout << "in  main     " << sizeof(arry);
    for (int i; i < n; i++)
    {
        cout << arry[i] << endl
             << n;
    }

    printArrry(arry);
}