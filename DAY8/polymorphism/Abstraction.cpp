#include <iostream>
using namespace std;

class Car
{
private:
    void fuelcheck()
    {
        cout << "fuel checking ....\n";
    }
    void batterycheck()
    {
        cout << "battery checking ....\n";
    }

public:
    void show()
    {
        fuelcheck();
        batterycheck();
        cout << "car started.....";
    }
};
int main()
{
    Car c1;
    c1.show();
    return 0;
}