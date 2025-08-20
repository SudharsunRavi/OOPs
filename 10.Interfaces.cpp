#include <bits/stdc++.h>
using namespace std;

// Interface
class Animal {
public:
    virtual void eat() = 0;
    virtual void sleep() = 0;
};

// Implementing the interface
class Dog : public Animal {
public:
    void eat() override {
        cout << "Dog eats bones." << endl;
    }

    void sleep() override {
        cout << "Dog sleeps in a kennel." << endl;
    }
};


