#include <cmath>

double computeArea(const Point &a, const Point &b, const Point &c){
    double length1, length2, length3, area;
    
    length1 = distanceTo(a, b);
    length2 = distanceTo(b, c);
    length3 = distanceTo(c, a);
    area = sqrt(4(pow(length1,2)*pow(length2,2)) - pow((pow(length1,2) + pow(length2,2) - pow(length3,2)),2))
    
    return area;
}
