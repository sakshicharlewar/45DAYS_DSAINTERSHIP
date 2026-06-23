#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 1, 3, 4, 5, 1,5, 7, 8, 9};
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}