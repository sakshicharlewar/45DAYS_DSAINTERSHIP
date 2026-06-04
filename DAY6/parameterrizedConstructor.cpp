#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string b,int a)
    {
      age=a;
      name=b;
    }
};
int main()
{
    Student s1("sakshi",19);
    cout<<"the name of s1 is"<<s1.name<<endl;
    cout<<"the age of s1  is"<<s1.age;
}
