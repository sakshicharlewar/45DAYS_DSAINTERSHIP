#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {7,4,9,3,5};
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max;
    return 0;
}
