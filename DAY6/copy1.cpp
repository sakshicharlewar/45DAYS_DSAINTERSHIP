#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    Student()
    {
    }
    Student(Student &a)
    {
        cout << "copy constructor...\n";
        this->name = a.name;
        this->rollNo = a.rollNo;
    }
};

int main()
{
    Student s1;
    s1.name = "sakshi";
    s1.rollNo = 16;
    cout << "name :" << s1.name << endl;
    cout << "rollno :" << s1.rollNo << endl;
    Student s2(s1);
    cout << "name :" << s2.name << endl;
    cout << "rollno :" << s2.rollNo << endl;

    return 0;
}