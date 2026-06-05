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
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Student s1;
   // Student s2("sakshi", 19);
    cout << s1.sum(5, 5) << endl;
    cout << s1.sum(5, 5, 5);
    return 0;
}