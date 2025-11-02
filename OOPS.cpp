#include<iostream>
using namespace std;
class base {
    public:
    virtual void show() {
        cout << "Base class show function called." << endl;
    }
    // Virtual destructor so derived objects are destroyed correctly
    virtual ~base() = default;
};
class derived : public base {
    public:
    void show() override {
        cout << "Derived class show function called." << endl;
    }
};
int main() {
    base* bptr;
    derived d;
    bptr = &d;

    // Virtual function call - because show() is virtual, this calls derived::show()
    bptr->show(); // Calls derived class show function

    return 0;
}