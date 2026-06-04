#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student()
    {
        cout << "constructor invoked"<<endl;
    }
};
int main()
{
    Student s1;
    cout<<&s1<<endl;
    Student s2;
    cout<<&s2;
}
