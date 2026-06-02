#include <iostream>
using namespace std;

void evennumber(int n)
{
    if (n == 0)
    {
        return;
    }

    evennumber(n - 1);
    if (n % 2 == 0)
    {
        cout << n << endl;
    }
}
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    evennumber(n);
}