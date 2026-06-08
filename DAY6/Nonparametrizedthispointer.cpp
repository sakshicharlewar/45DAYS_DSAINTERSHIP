#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
    Student()
    {
        cout << "non parametrized cosnstructor..\n";
        cout << "memory adress of this pointer:" << this << endl;
    }
};

int main()
{
    Student s1;
    cout << "memory adress of this operator" << &s1 << endl;
    return 0;
}