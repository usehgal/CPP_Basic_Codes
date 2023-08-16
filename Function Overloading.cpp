#include <iostream>

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int main() {
    int x = 5, y = 3;
    double a = 2.5, b = 3.7;

    std::cout << "Sum of integers: " << add(x, y) << std::endl;
    std::cout << "Sum of doubles: " << add(a, b) << std::endl;

    return 0;
}
