#include <iostream>
#include <fstream>

int main() {
    std::ofstream outFile("output.txt");

    if (outFile.is_open()) {
        outFile << "Hello, File I/O!" << std::endl;
        outFile.close();
    } else {
        std::cout << "Unable to open the file." << std::endl;
    }

    return 0;
}
