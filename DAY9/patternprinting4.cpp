#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_4(int n)
    {
        for (int i = n; i <= 1; i--)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "* ";
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
    p1.pattern_4(n);
}
