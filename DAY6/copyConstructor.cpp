#include <iostream>
using namespace std;

class Student
{
public:
    string name = "sakshi";
    int age = 19;
    void show()
    {
        cout << "name :" << name << endl;
        cout << "age :" << age << endl;
    }
};

int main()
{
    Student s1;
    s1.show();

    Student s2(s1);
    s1.show();

    return 0;
}