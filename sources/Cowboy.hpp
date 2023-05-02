#ifndef COWBOY_HPP
#define COWBOY_HPP

#include <string>
#include "Point.hpp"
using namespace std;

namespace ariel{
    class Cowboy{
        private:
            string name_;
            Point *point_;

        public:
            Cowboy(string, Point&);
            ~Cowboy();
    };
}

#endif