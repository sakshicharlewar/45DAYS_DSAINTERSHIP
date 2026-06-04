#include <iostream>
using namespace std;

class Animal
{
public:
    string name;
    int age;
    string color;
    void eat()
    {
        cout << "eating" << endl;
    }
    void sleep()
    {
        cout << "sleeping";
    }
};
class Dog : public Animal
{
};
int main()
{
    Dog d1;
    d1.name = "jony";
    d1.age = 11;
    cout << "name :" << d1.name << endl;
    cout << "age :" << d1.age << endl;
    d1.eat();
    d1.sleep();
    return 0;
}