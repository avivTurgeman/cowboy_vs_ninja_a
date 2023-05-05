#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

namespace ariel{
    class Point{
        private:
            double _x;
            double _y;

        public:
            Point();
            
            Point(double x, double y);

            double distance(const Point& other);

            void print();
            Point moveTowards(Point&, const Point&, double);
            
            double getX() const{
                return _x;
            }
            double getY() const{
                return _y;
            }
    };
}

#endif