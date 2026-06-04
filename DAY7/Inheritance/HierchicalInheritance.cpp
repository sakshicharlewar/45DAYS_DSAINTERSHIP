#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "Class A" << endl;
    }
};

class B : public A {
};

class C : public A {
};

int main() {
    B obj1;
    C obj2;

    obj1.display();
    obj2.display();

    return 0;
}