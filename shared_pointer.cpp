#include <iostream>
#include <memory>

struct MyObject {
    MyObject() { std::cout << "MyObject created\n"; }
    ~MyObject() { std::cout << "MyObject destroyed\n"; }
};

int main() {
    std::shared_ptr<MyObject> ptr1 = std::make_shared<MyObject>();
    {
        std::shared_ptr<MyObject> ptr2 = ptr1; // ptr2 shares ownership with ptr1
    }
    // ptr2 goes out of scope, but ptr1 still owns the resource
    return 0;
