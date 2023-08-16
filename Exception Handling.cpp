#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        throw "Division by zero is not allowed.";
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;

    try {
        int result = divide(x, y);
        std::cout << "Result: " << result << std::endl;
    } catch (const char* msg) {
        std::cout << "Exception caught: " << msg << std::endl;
    }

    return 0;
}
