#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "default constructor called.....\n";
    }
    Student(string n, int a)
    {
        cout << "parameterized constructor called....\n";
        name = n;
        age = a;
    }

};
int main()
{
    Student s1;
   Student s2("sakshi", 19);
    
    return 0;
}