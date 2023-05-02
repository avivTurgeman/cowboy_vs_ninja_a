#ifndef POINT_HPP
#define POINT_HPP

namespace ariel{
    class Point{
        private:
            double x_;
            double y_;

        public:
            Point(double, double);

            double distance(const Point&);
            void print();
            Point moveTowards(Point&, Point&, double);

    };
}

#endif