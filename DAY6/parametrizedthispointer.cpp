#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollno;

public:
    Student(string name, int rollno)
    {
        cout << "parametrized constructor..\n";
        this->name = name;
        this->rollno = rollno;

        cout << "Name inside constructor" << name << endl;
        cout << "rollno inside constructor" << rollno << endl;
    }
    void show()
    {
        cout << "Name outside constructor" << name << endl;
        cout << "rollno outside constructor" << rollno << endl;
    }
};
int main()
{
    Student s1("sakshi", 16);
    s1.show();
    return 0;
}