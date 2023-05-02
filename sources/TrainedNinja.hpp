#ifndef TRAINEDNINJA_HPP
#define TRAINEDNINJA_HPP

#include "Ninja.hpp"

namespace ariel{
    class TrainedNinja : public Ninja{

        public:
            //constructor
            TrainedNinja(std::string name, Point& location):
            Ninja(name, location, 120, 12){}
    };
}

#endif