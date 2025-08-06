#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // 1. Default Constructor
    Rectangle() : length(1), width(1) {
        std::cout << "Default Constructor called. Created a 1x1 rectangle." << std::endl;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int w) : length(l), width(w) {
        std::cout << "Parameterized Constructor called. Created a " << l << "x" << w << " rectangle." << std::endl;
    }

    // 3. Copy Constructor
    // It takes a constant reference to an object of the same class.
    Rectangle(const Rectangle &other) : length(other.length), width(other.width) {
        std::cout << "Copy Constructor called. Cloned a " << other.length << "x" << other.width << " rectangle." << std::endl;
    }

    int getArea() const {
        return length * width;
    }
};

int main() {
    std::cout << "--- Creating Objects ---\n" << std::endl;

    // This calls the Default Constructor
    Rectangle rect1;

    // This calls the Parameterized Constructor
    Rectangle rect2(10, 5);

    // This calls the Copy Constructor to create rect3 as a copy of rect2
    Rectangle rect3 = rect2; // can also write: Rectangle rect3(rect2);

    std::cout << "\n--- Verifying Areas ---\n" << std::endl;

    std::cout << "Area of rect1 (default): " << rect1.getArea() << std::endl;
    std::cout << "Area of rect2 (parameterized): " << rect2.getArea() << std::endl;
    std::cout << "Area of rect3 (copy): " << rect3.getArea() << std::endl;

    return 0;
}