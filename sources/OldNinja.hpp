#ifndef OLDNINJA_HPP
#define OLDNINJA_HPP

#include "Ninja.hpp"

namespace ariel{
    class OldNinja : public Ninja{

        public:
            //constructor
            OldNinja(std::string name, Point& location):
            Ninja(name, location, 150, 8){}
    };
}

#endif