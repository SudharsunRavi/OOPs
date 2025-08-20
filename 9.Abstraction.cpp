#include <bits/stdc++.h>
using namespace std;

// Abstract class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }

    virtual void sound() = 0; // Pure virtual function
};

// Dog class
class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks." << endl;
    }
};

// Cat class
class Cat : public Animal {
public:
    void sound() override {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Animal* myDog = new Dog();
    Animal* myCat = new Cat();

    myDog->eat();
    myDog->sound();
    myCat->eat();
    myCat->sound();

    return 0;
}


