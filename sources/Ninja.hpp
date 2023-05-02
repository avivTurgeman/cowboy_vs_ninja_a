#ifndef NINJA_HPP
#define NINJA_HPP

#include "Character.hpp"

namespace ariel{
    class Ninja : public Character{
        private:
            int _speed;

        public:
            //constructor
            Ninja(std::string name, Point& location, int hp, int speed):
            Character(name, location, hp), _speed(speed){}

            //Ninja methods
            void move(Character*);
            void slash(Character*);
    };
}

#endif