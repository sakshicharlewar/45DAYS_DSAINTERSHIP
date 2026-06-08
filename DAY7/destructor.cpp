#include <iostream>
using namespace std;

class Student{
public:
    string name;
    int rollNo;

    Student()
    {
        cout<<"constructor invoked ...\n";

    }
    ~Student()
    {
        cout<<"destructor invoked ...\n";

    }
};
int main()
{
    Student s1;
    s1.name="sakshi";
    cout<<"name : "<<s1.name<<endl;
    return 0;
}