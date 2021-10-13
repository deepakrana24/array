#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>::iterator lowerboundFunction(vector<int> arr, int key)
{
    vector<int>::iterator low;

    low = lower_bound(arr.begin(), arr.end(), key);
    return low;
}
int main()
{
    vector<int> a = {-1, -1, 2, 3, 5};
    int key;
    cout << "please enter the key or value  to find in the array " << endl;
    cin >> key;
    cout << "lower bound value to " << key << "is " << lowerboundFunction(a, key) << endl;
    return 0;
}

// need 2 min session by anay
