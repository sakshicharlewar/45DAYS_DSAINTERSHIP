#include <iostream>
using namespace std;

void oddnumber(int n)
{
    if (n == 0)
    {
        return;
    }

    oddnumber(n - 1);
    if (n % 2 != 0)
    {
        cout << n << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    oddnumber(n);
}