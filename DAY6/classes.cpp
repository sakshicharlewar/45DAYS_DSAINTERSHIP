#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    string email;
    int age;

};
int main()
{
    Student s1;
    s1.name="sakshi";
    s1.email="sakshi@gmail";
    s1.age=19;
    cout<<s1.name<<endl<<s1.email<<endl<<s1.age;

    return 0;
}