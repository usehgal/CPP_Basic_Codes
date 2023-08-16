#include <iostream>

int add(int a, int b = 0) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    int result1 = add(x);
    int result2 = add(x, y);

    std::cout << "Sum with default argument: " << result1 << std::endl;
    std::cout << "Sum with provided argument: " << result2 << std::endl;

    return 0;
}
