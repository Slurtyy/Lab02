#include <iostream>
#include <string>
#include <cmath>

class Driver_info {

    std::string firstname;
    std::string lastname;
    unsigned int driver_id = 0;

public:
    std::string get_firstname() {
        return firstname;
    }

    std::string get_lastname() {
        return lastname;
    }

    void set_driverID(int a) {
        driver_id = a;
    }

    unsigned int get_driverID(){
        return driver_id;
    }
};

class Truck_info {

    unsigned int truck_id;

public:
    void set_truckID(int a) {
        truck_id = a;
    }

    unsigned int get_truckID(){
        return truck_id;
    }
};

class Truck_location {

    int x;
    int y;

public:
    int getX() {
        return x;
    }

    int getY() {
        return y;
    }

    void setX(int a) {
        x = a;
    }

    void setY(int b) {
        y = b;
    }

    double distanceFrom (int x, int y, int a, int b) {
        return sqrt(pow(x - a, 2) + pow(y - b, 2));
    }
};


int main() {

    Driver_info driver1;
    Driver_info driver2;
    Truck_info truck1 = {};
    Truck_info truck2 = {};

    driver1.get_firstname() = "Liz";
    driver1.get_lastname() = "Brian";
    driver1.set_driverID(35);

    driver2.get_firstname() = "Mike";
    driver2.get_lastname() = "Smith";
    driver2.set_driverID(69);

    truck1.set_truckID(178543);
    truck2.set_truckID(245871);

    Truck_location t1 = {};
    Truck_location t2 = {};

    t1.setX(2);
    t1.setY(3);
    t2.setX(5);
    t2.setY(2);


    std::cout << "The distance between the two trucks is " <<
    t1.distanceFrom(t1.getX(),t1.getY(),t2.getX(),t2.getY()) << std::endl;

    std::cout << "The distance between the origin and the truck with ID " << truck1.get_truckID()
    << " is " << t1.distanceFrom(t1.getX(),t1.getY(),0,0) << std::endl;

    std::cout << "The distance between the origin and the truck with ID " << truck2.get_truckID()
    <<" is " << t1.distanceFrom(t2.getX(),t2.getY(),0,0) << std::endl;

    return 0;
}