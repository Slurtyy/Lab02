#include "Header.h"

int main() {

    truck_info truck1 ("Liz", "Brian", 35, 178543, 2, 3);
    truck_info truck2 ("Matt", "Smith", 69, 245871, 5, 2);
    truck_location origin;
    origin.setX(0);
    origin.setY(0);


    std::cout << "The distance between the two trucks is: " <<
    truck1.loc.distanceFrom(truck1.loc.getX(),truck1.loc.getY(),truck2.loc.getX(),truck2.loc.getY()) << std::endl;

    std::cout << "The distance between truck ID 178543 and origin is: " <<
    truck1.loc.distanceFrom(truck1.loc.getX(),truck1.loc.getY(),origin.getX(),origin.getY()) << std::endl;

    std::cout << "The distance between the truck (with ID = 245871) and the origin is: " <<
    truck2.loc.distanceFrom(truck2.loc.getX(),truck2.loc.getY(),origin.getX(),origin.getY()) << std::endl;

    return 0;
}