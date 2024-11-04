//
// Created by xxtex on 11/4/2024.
//

#include "Point.hpp"
using namespace std;

bool Point::operator==(const Point& other) const {
    return x == other.x && y == other.y;
}

ostream& operator<<(ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}