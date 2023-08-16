#include <iostream>

class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

int main() {
    Shape shape;
    Circle circle;

    shape.draw();
    circle.draw();

    return 0;
}
