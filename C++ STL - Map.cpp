#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> ages;

    ages["Alice"] = 30;
    ages["Bob"] = 25;
    ages["Charlie"] = 35;

    std::cout << "Age of Alice: " << ages["Alice"] << std::endl;
    std::cout << "Age of Bob: " << ages["Bob"] << std::endl;
    std::cout << "Age of Charlie: " << ages["Charlie"] << std::endl;

    return 0;
}
