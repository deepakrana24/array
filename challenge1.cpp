#include <iostream>
#include <vector>
using namespace std;
int largestElement(vector<int> arr)
{
    int max = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    vector<int> arr_1 = {-3, 4, 1, 2, 3};
    vector<int> arr_2 = {-3, -1, -2, 8};

    cout << largestElement(arr_1) << endl;
    cout << largestElement(arr_2) << endl;

    return 0;
}