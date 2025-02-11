#include <iostream>
#include <memory>

struct MyObject {
    MyObject() { std::cout << "MyObject created\n"; }
    ~MyObject() { std::cout << "MyObject destroyed\n"; }
};

int main() {
    std::unique_ptr<MyObject> ptr = std::make_unique<MyObject>();
    // ptr is automatically destroyed when it goes out of scope
    return 0;
}
