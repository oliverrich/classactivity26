//
// Created by xxtex on 11/4/2024.
//

#ifndef POINT_HPP
#define POINT_HPP
#include <iostream>
using namespace  std;struct Point {
    int x, y;

    bool operator==(const Point& other) const;
    friend ostream& operator<<(ostream& os, const Point& point);

};
#endif //POINT_HPP
