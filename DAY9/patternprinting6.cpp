#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_6(int n)
    {
                for (int i = 1; i <= n; i++)
        {
            for (int j = n; j >= i; j--)
            {
                cout << j;
            }
            cout << " " << endl;
        }
    }
};
int main()
{
    Pattern p1;
    int n;
    cout << "enter the number";
    cin >> n;
    p1.pattern_6(n);
}
