#include <iostream>
using namespace std;

class Bank
{
private:
    int bankbalance = 5000;

public:
    void getbankbalance()
    {
        cout << "bankbalance";
    }
    void deposite(int n)
    {
        bankbalance += n;
    }
};
    int main()
    {
        Bank b1;
        b1.deposite(5000);
            b1.getbankbalance();
    
                return 0;
    
}
