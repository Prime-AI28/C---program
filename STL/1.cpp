/******************************************************************************



STL Vector - Sorting



https://hackingcpp.com/cpp/cheat_sheets.html#hfold0a
*******************************************************************************/
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> vec; // 1. create container object

    for (int i = 0; i < n; i++)
    { // 2. storing the data
        int a;
        cin >> a;
        vec.push_back(a); // 2.1 Pushing into container {10, 20, 30, 40, 50}
    }

    sort(vec.begin(), vec.end()); // 3. algorithm- sort opration

    for (int i = 0; i < n; i++) // 4. printing the elements
        cout << vec[i] << " ";

    return 0;
}