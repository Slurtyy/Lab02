#include <iostream>
#include <string>
#include <cmath>

class Driver_info {

    std::string firstname;
    std::string lastname;
    unsigned int driver_id;

public:
    std::string get_firstname() {
        return firstname;
    }

    std::string get_lastname() {
        return lastname;
    }

    int get_driverID() {
        return driver_id;
    }
};

class Truck_info {

    unsigned int truck_id;

public:
    int get_truckid() {
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

    int setX(int a) {
        x = a;
    }

    int setY(int b) {
        y = b;
    }

    double distanceFrom (int x, int y, int a, int b) {
        return sqrt(pow(x - a, 2) + pow(y - b, 2));
    }
};


int main() {


    return 0;
}