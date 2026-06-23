#include <iostream>
#include <map>
using namespace std;

int main()
{
    string str = {"ABBccCDDdE"};
    map<char, int> hashmap;

    // Traversing in string
    for (int i = 0; i < str.size(); i++)
    {
        hashmap[str[i]]++;
    }
    // Traversing in hashmap
    for (auto it : hashmap)
    {
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}