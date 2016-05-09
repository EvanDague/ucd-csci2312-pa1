#include <cmath>
#include <iostream>
#include "Point.h"

// Constructors
Point::Point() :
    x(0), y(0), z(0)
{
}
Point::Point(double x, double y, double z) :
    x(x), y(y), z(z)
{
}

Point::~Point(){
    
}

// Mutator methods
void Point::setX(double newX){
    x = newX;
}
void Point::setY(double newY){
    y = newY;
}
void Point::setZ(double newZ){
    z = newZ;
}

// Accessor methods
double Point::getX() const{
    return x;
}
double Point::getY() const{
    return y;
}
double Point::getZ() const{
    return z;
}

// Distance function
double Point::distanceTo(const Point& a) const{
    double xdist = a.getX() - this->getX();
    double ydist = a.getY() - this->getY();
    double zdist = a.getZ() - this->getZ();
    
    double dist1, dist2;
    dist1 = sqrt(xdist*xdist + ydist*ydist);
    dist2 = sqrt(dist1*dist1 + zdist*zdist);
    
    return dist2;
    
}
