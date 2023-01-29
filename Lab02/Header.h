#ifndef LAB02_SLN_HEADER_H
#define LAB02_SLN_HEADER_H

#include <iostream>
#include <cmath>

class driver_info {

    std::string firstname;
    std::string lastname;
    unsigned int driver_id = 0;

public:
    void set_firstname(std::string info) {
        firstname = info;
    }

    void set_lastname(std::string info) {
        lastname = info;
    }

    void set_driverID(int a) {
        driver_id = a;
    }

    unsigned int get_driverID(){
        return driver_id;
    }
};


class truck_location {

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

class truck_info {

    unsigned int truckID;

public:
    driver_info driver;
    truck_location loc;

    truck_info (std::string first,std::string last, int ID, int trID, int x, int y){

        driver.set_firstname(first);
        driver.set_lastname(last);
        driver.set_driverID(ID);
        truckID = trID;
        loc.setX(x);
        loc.setY(y);
    }
    void set_truckID(int a) {
        truckID = a;
    }

    unsigned int get_truckID(){
        return truckID;
    }
};

#endif //LAB02_SLN_HEADER_H
