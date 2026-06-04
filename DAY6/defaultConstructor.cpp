#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "constructor invoked";
    }
};
int main()
{
    Student s1;
    
}
