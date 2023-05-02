#ifndef COWBOY_HPP
#define COWBOY_HPP

#include <string>
#include "Character.hpp"

namespace ariel{
    class Cowboy : public Character{
        private:
            int _balls_amount;

        public:
            //constractor
            Cowboy(std::string name, Point& location):
            Character(name, location, 110), _balls_amount(6){}

            void shoot(Character*);
            bool hasboolets();
            void reload();      
    };
}

#endif