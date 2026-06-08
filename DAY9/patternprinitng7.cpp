#include <iostream>
using namespace std;

class Pattern
{
public:
    void pattern_7(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= (n - i); j++)
            {
                cout << " ";
            }

            for (int j = 1; j <= ((2 * i) - 1); j++)
            {
                cout << "*" ;
            }
            cout<<" "<<endl;
        }
    }
};
int main()
{
    Pattern p1;
    int n;
    cout << "enter the number";
    cin >> n;
    p1.pattern_7(n);
}
