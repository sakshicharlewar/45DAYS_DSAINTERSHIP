#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "ABBCCADE";
    vector<int> hash(26, 0);
    // hash creation
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i] - 'A']++;
    }
    // hash retrive
    // cout << hash['A' - 'A'];
    for(auto it :hash)
    {
        cout<<it<<" ";
    }

    return 0;
}
