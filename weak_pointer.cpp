#include <iostream>
#include <memory>

struct MyObject {
    MyObject() { std::cout << "MyObject created\n"; }
    ~MyObject() { std::cout << "MyObject destroyed\n"; }
};

int main() {
    std::shared_ptr<MyObject> ptr1 = std::make_shared<MyObject>();
    std::weak_ptr<MyObject> wptr = ptr1; // wptr does not own the resource
    
    if (auto sptr = wptr.lock()) { // Check if the resource is still available
        std::cout << "Resource is still available\n";
    } else {
        std::cout << "Resource is no longer available\n";
    }
    return 0;
}
Key Poi
