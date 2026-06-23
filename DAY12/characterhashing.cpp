#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<string> arr = {"a", "b", "b", "a", "c", "c", "d", "e"};
    // int hash[26]={0};
    //  for (int i = 0; i < arr.size(); i++)
    // {
    //     hash[arr[i][0] - 'a']++;
    // }
    // cout << hash['a' - 'a'];



    string str = "abbcbead";
    vector<int> hash(26, 0);
    // hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'a']++;
    }
    // hash retrive
    // cout << hash['c' - 'b'];
    for(auto it :hash)
    {
        cout<<it<<" ";
    }

    return 0;
}
