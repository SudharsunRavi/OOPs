#include <bits/stdc++.h>
using namespace std;

//Base Class
class Vehicle {
public:
    void use_horn() {
        cout << "Beep beep!" << endl;
    }
};

// Single & Hierarchical Inheritance (Vehicle->Car / Bus)
class Car : public Vehicle {
public:
    void drive() {
        cout << "The car is driving on the road." << endl;
    }
};

class Bus : public Vehicle {
public:
    void carry_passengers() {
        cout << "The bus is carrying passengers." << endl;
    }
};


// Multilevel Inheritance Example
// Vehicle -> Car -> SportsCar
class SportsCar : public Car {
public:
    void go_fast() {
        cout << "The sports car is speeding up!" << endl;
    }
};


// Base Classes for Multiple & Hybrid Inheritance
class WaterVehicle {
public:
    void float_on_water() {
        cout << "Floating on water." << endl;
    }
};

class LandVehicle {
public:
    void drive_on_land() {
        cout << "Driving on land." << endl;
    }
};

//Multiple Inheritance Example
class AmphibiousVehicle : public WaterVehicle, public LandVehicle {
public:
    void enter_water() {
        cout << "Amphibious vehicle is transitioning to water mode." << endl;
    }
};


int main() {
    cout << "Single & Hierarchical Inheritance" << endl;
    Car myCar;
    myCar.use_horn();
    myCar.drive();

    Bus myBus;
    myBus.use_horn();
    myBus.carry_passengers();

    cout << "\nMultilevel Inheritance" << endl;
    SportsCar myFerrari;
    myFerrari.use_horn();
    myFerrari.drive();
    myFerrari.go_fast();

    cout << "\nMultiple Inheritance" << endl;
    AmphibiousVehicle myAmphibian;
    myAmphibian.drive_on_land();
    myAmphibian.float_on_water();
    myAmphibian.enter_water();

    return 0;
}