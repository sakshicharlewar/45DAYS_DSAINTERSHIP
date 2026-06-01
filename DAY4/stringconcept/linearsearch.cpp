#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int num;
    cout << "enter the number";
    cin >> num;

    for (int i = 0; i < 5; i++)
    {
        if (num == arr[i])
        {
            cout << "key is found";
        }
        
    }
    return 0;
}
