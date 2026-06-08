#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_5(int n)
    {
        for (int i = 1; i<=n; i++)
        {
            for (int j = 1; j <=n-i+1; j++)
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
    p1.pattern_5(n);
}
