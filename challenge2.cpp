#include <iostream>
#include <vector>
using namespace std;

// applying here tudane`s algo

int maxSumSubarray(vector<int> A)
{
    int sc = 0;
    int maxc = 0;

    for (int i = 0; i < A.size(); i++)
    {
        sc = sc + A[i];
        if (sc < 0)
        {
            sc = 0;
        }
        maxc = max(sc, maxc);
    }
    return maxc;
}

int main()
{
    vector<int> arr_1 = {1, -2, 3, 4, 4, -2};
    vector<int> arr_2 = {5, 0, -1, 0, 1, 2, -1};
    cout << endl;
    cout << maxSumSubarray(arr_1) << endl;
    cout << maxSumSubarray(arr_2) << endl;
    return 0;
}