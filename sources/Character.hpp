#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "Point.hpp"

namespace ariel{
    class Character{
        private:
            Point* _location;
            int _hp;
            std::string _name;

        public:
            //constructor
            Character(std::string, Point&, int hp);

            bool isAlive();
            double distance(Character*);
            void hit(int);
            std::string getName();
            Point getLocation();
            virtual void Print();
    };
}

#endif