#include <iostream>
using namespace std;

int main()
{
    string str;
    cout << "enter the string";
    cin >> str;
    char target;
    cout<<"enter the character";
    cin>>target;
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == target)
        {
            count++;
        }
    }
    cout << "frequency" << " " << count;
}