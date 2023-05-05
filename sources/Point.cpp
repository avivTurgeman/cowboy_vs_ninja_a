#include "Point.hpp"

using namespace std;

namespace ariel{

    Point::Point():_x(0), _y(0){}
  
    Point::Point(double x, double y):
    _x(x), _y(y){}

    double Point::distance(const Point& other){
        double otherX = other.getX();
        double otherY = other.getY();
        double x_pow = pow((otherX - _x), 2);
        double y_pow = pow((otherY - _y), 2);
        return sqrt(x_pow + y_pow);
    }

    void Point::print(){
        cout << "(" << _x << "," << _y << ")\n";
    }

    Point Point::moveTowards(Point& src, const Point& dest, double dist){
        double srcToDestDist = src.distance(dest);
        if(srcToDestDist <= dist){
            return dest;
        }
        double angle = atan2(dest.getY() - src.getY(), dest.getX() - src.getX());
        double newX = src.getX() + dist * cos(angle);
        double newY = src.getY() + dist * sin(angle);
        return Point(newX, newY);
    }
}
