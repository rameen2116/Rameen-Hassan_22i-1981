#include <iostream>
#include <cmath>
using namespace std;
class Point {
private:
    double x, y;

public:
    // Constructor
    Point(double x = 0, double y = 0) : x(x), y(y) {}

    // Getter methods
    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    // Setter methods
    void setX(double newX) {
        x = newX;
    }

    void setY(double newY) {
        y = newY;
    }

    // Method to calculate distance
    double distance(const Point& other) const {
        double dx = x - other.x;
        double dy = y - other.y;
        return sqrt(dx * dx + dy * dy);
    }
};

int main() {
    
    Point point1(1, 2);
    Point point2(4, 6);

    cout << "Distance between point1 and point2: " << point1.distance(point2) << endl;

    return 0;
}
