#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string str = "AABBccDDe";
    vector<int> hash(123, 0);
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]]++;
    }
    cout << hash['A'];
    return 0;
}