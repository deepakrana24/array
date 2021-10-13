#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
//g++  -std=c++11
using namespace std;

// int largest(vector<int> arr, int n)
// {
//     int cs = 0;
//     int ms = 0;
//     for (int i ; i <n; i++){
//     }
// }

int main()
{
    vector<int> arr;
    arr = {1, 2, 3, 4, 5, 6, 7};
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    arr.push_back(10);
    cout << arr.size() << endl;
    cout << arr.capacity() << endl;
    return 0;
}