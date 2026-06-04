#include <iostream>
using namespace std;

class Student
{
public:
    string name="sakshi";
    string email="s@gmail.com";
    int age=19;

public:
    void getData()
    {
        cout << name << endl;
        cout << email << endl;
        cout << age;
    }


    void setData()
    {
    name="abc";
    }
};
int main()
{
    Student s1;
    s1.setData();
    s1.getData();

    return 0;
}
