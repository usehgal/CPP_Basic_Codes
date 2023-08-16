#include <iostream>

int main() {
    int x = 5;
    int* ptr = &x;

    std::cout << "Value of x: " << x << std::endl;
    std::cout << "Address of x: " << &x << std::endl;
    std::cout << "Value stored in the pointer: " << *ptr << std::endl;

    return 0;
}
