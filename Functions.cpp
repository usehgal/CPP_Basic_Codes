#include <iostream>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    int result = add(x, y);
    std::cout << "Sum: " << result << std::endl;

    return 0;
}
