#include <iostream>
using namespace std;

class Counter {
public:
    static int count; // static variable

    // Constructor
    Counter() {
        count++;
    }

    // Method to display count
    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};

// Math Utility class
class MathUtils {
public:
    static int add(int a, int b) {
        return a + b;
    }
};

int Counter::count = 0; // Definition of static variable

// Main function
int main() {
    Counter c1;
    Counter c2;
    Counter::displayCount(); // Output: Count: 2
    int result = MathUtils::add(5, 3); // Calling static method without object creation
    cout << "Result: " << result << endl; // Output: Result: 8
    return 0;
}





