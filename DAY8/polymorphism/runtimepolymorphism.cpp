#include <iostream>
using namespace std;

class Animal
{
public:
    void eat()
    {
        cout << "eating";
    }
    void sound()
    {
        cout << "sound";
    }
};

class Dog : public Animal
{
public:
    void sound()
    {
        cout << "bhoww bhoww"<<endl;
    }
};
class Cat : public Animal
{
public:
    void sound()
    {
        cout << "meow meow";
    }
};
int main()
{
    Dog d1;
    Cat c1;
    d1.sound();
    c1.sound();
    return 0;
}
