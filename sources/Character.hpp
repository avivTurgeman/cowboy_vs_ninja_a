#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <string>
#include "Point.hpp"

namespace ariel{
    class Character{
        protected:
            Point _location;
            int _hp;
            std::string _name;

        public:
            //constructor
            Character(std::string, const Point&, int hp);

            bool isAlive();
            double distance(Character*);
            void hit(int);
            virtual std::string print() = 0;

            std::string getName(){
                return _name;
            }
            Point getLocation(){
                return _location;
            }

            void setLocation(Point location){
                _location = location;
            }
    };
}

#endif