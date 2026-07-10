#include <iostream>
#include <vector>
using namespace std;

void subsequence(int index, vector<int> &arr, vector<int> &ds)
{

    if (index == arr.size())
    {
        for (auto i : ds)
            cout << i << " ";
        cout << endl;
        return;
    }
    ds.push_back(arr[index]);
    subsequence(index + 1, arr, ds);

    ds.pop_back();
    subsequence(index + 1, arr, ds);
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<int> ds;
    subsequence(0, arr, ds);
    return 0;
}