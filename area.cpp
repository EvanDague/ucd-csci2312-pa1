#include <cmath>
#include <iostream>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c){
    double length1, length2, length3, area;
    
    length1 = b.distanceTo(a);
    length2 = c.distanceTo(b);
    length3 = a.distanceTo(c);
    area = sqrt(4*(pow(length1,2)*pow(length2,2)) - pow((pow(length1,2) + pow(length2,2) - pow(length3,2)),2))/4;
    
    return area;
}
