#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    std::cout << "Using index: ";
    for (size_t i = 0; i < numbers.size(); i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Using iterators: ";
    for (std::vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
