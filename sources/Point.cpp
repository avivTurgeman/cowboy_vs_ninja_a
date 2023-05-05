#include "Point.hpp"

using namespace std;

namespace ariel{

    double Point::_slope(const Point& other){
        return ((_y - other.getY()) / (_x - other.getX()));
    }

    double Point::_line_equation_b_var(Point& point1, Point& point2){
        double slope = point1._slope(point2);
        double mx = slope * point1.getX();
        double  b = (point1.getY() - (slope * point1.getX()));
        return b;
    }

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
        if(src.distance(dest) <= dist){
            Point temp = dest;
            return temp;
        }
        double dist_pow = pow(dist, 2);
    }
}
