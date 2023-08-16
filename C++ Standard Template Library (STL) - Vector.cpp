#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    for (int i = 1; i <= 5; i++) {
        numbers.push_back(i);
    }

    std::cout << "Vector elements: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
