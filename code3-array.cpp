#include <iostream>
using namespace std;

int lowerBound(int A, int Val)
{
    for (int i = 0, i < n, i++)
    {
        if (A[i] < Val)
        {
            return A[i];
        }
    }
}

int main()
{
    int A[] = [ 1, 2, 3, 4, 5, 6, 7 ];
    int Val = 4;
    cout << lowerBound(A, Val);
}