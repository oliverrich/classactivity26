#include <iostream>
#include "utils/Point.hpp"
using namespace std;



int main() {
    Point p1 = {3, 4};
    Point p2 = {3, 4};
    Point p3 = {5, 6};

    cout << "Point 1: " << p1 << endl;
    cout << "Point 2: " << p2 << endl;
    cout << "Point 3: " << p3 << endl;

    if (p1 == p2) {
        cout << "Point 1 is equal to Point 2" << endl;
    } else {
        cout << "Point 1 is not equal to Point 2" << endl;
    }

    if (p1 == p3) {
        cout << "Point 1 is equal to Point 3" << endl;
    } else {
        cout << "Point 1 is not equal to Point 3" << endl;
    }

    return 0;
}
